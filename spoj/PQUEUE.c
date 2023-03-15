#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

// Struktur Queue

typedef struct queueNode_t
{
    int data;
    int cari;
    struct queueNode_t *next;
} QueueNode;

typedef struct queue_t
{
    QueueNode *_front,
        *_rear;
    unsigned _size;
} Queue;

// Struktur Priority Queue

typedef struct pqueueNode_t
{
    int data;
    int index;
    struct pqueueNode_t *next;
} PQueueNode;

typedef struct pqueue_t
{
    PQueueNode *_top;
    unsigned _size;
} PriorityQueue;

// Fungsi PQueue

void pqueue_init(PriorityQueue *pqueue)
{
    pqueue->_top = NULL;
    pqueue->_size = 0;
}

bool pqueue_isEmpty(PriorityQueue *pqueue)
{
    return (pqueue->_top == NULL);
}

void pqueue_push(PriorityQueue *pqueue, int value, int indexing)
{
    PQueueNode *temp = pqueue->_top;
    PQueueNode *newNode = (PQueueNode *)malloc(sizeof(PQueueNode));
    newNode->data = value;
    newNode->index = indexing;
    newNode->next = NULL;

    if (pqueue_isEmpty(pqueue))
    {
        pqueue->_top = newNode;
        return;
    }

    if (value > pqueue->_top->data)
    {
        newNode->next = pqueue->_top;
        pqueue->_top = newNode;
    }
    else
    {
        while (temp->next != NULL && temp->next->data > value)
            temp = temp->next;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void pqueue_pop(PriorityQueue *pqueue)
{
    if (!pqueue_isEmpty(pqueue))
    {
        PQueueNode *temp = pqueue->_top;
        pqueue->_top = pqueue->_top->next;
        free(temp);
    }
}

int pqueue_top(PriorityQueue *pqueue)
{
    if (!pqueue_isEmpty(pqueue))
        return pqueue->_top->data;
    else
        return 0;
}

// Fungsi Queue

void queue_init(Queue *queue)
{
    queue->_size = 0;
    queue->_front = NULL;
    queue->_rear = NULL;
}

bool queue_isEmpty(Queue *queue)
{
    return (queue->_front == NULL && queue->_rear == NULL);
}

void queue_push(Queue *queue, int value, int indexing)
{
    QueueNode *newNode = (QueueNode *)malloc(sizeof(QueueNode));
    if (newNode)
    {
        queue->_size++;
        newNode->data = value;
        newNode->cari = indexing;
        newNode->next = NULL;

        if (queue_isEmpty(queue))
            queue->_front = queue->_rear = newNode;
        else
        {
            queue->_rear->next = newNode;
            queue->_rear = newNode;
        }
    }
}

void queue_pop(Queue *queue)
{
    if (!queue_isEmpty(queue))
    {
        QueueNode *temp = queue->_front;
        queue->_front = queue->_front->next;
        free(temp);

        if (queue->_front == NULL)
            queue->_rear = NULL;
        queue->_size--;
    }
}

int queue_front(Queue *queue)
{
    if (!queue_isEmpty(queue))
    {
        return (queue->_front->data);
    }
    return (int)0;
}

int queue_frontcek(Queue *queue)
{
    if (!queue_isEmpty(queue))
    {
        return (queue->_front->cari);
    }
    return 0;
}

int queue_size(Queue *queue)
{
    return queue->_size;
}

int searching(Queue *queue, PriorityQueue *pqueue)
{
    int count = 1;
    while (!queue_isEmpty(queue))
    {
        if (queue_frontcek(queue) == 1 && queue_front(queue) >= pqueue_top(pqueue))
            return count;
        if (queue_front(queue) < pqueue_top(pqueue))
        {
            queue_push(queue, queue_front(queue), queue_frontcek(queue));
            queue_pop(queue);
        }
        else
        {
            queue_pop(queue);
            pqueue_pop(pqueue);
            count++;
        }
    }
    return count;
}

// Fungsi Utama

int main()
{
    Queue myQueue;
    PriorityQueue myPque;

    int test_case;
    scanf("%d", &test_case);

    while (test_case--)
    {
        queue_init(&myQueue);
        pqueue_init(&myPque);

        int a, index, count = 0, x;
        scanf("%d %d", &a, &index);
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &x);
            if (i == index)
            {
                pqueue_push(&myPque, x, 1);
                queue_push(&myQueue, x, 1);
            }
            else
            {
                pqueue_push(&myPque, x, 0);
                queue_push(&myQueue, x, 0);
            }
        }
        count = searching(&myQueue, &myPque);
        printf("%d\n", count);
    }
}