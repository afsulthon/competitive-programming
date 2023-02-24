#include <cstdio>
using namespace std;

void printSpiral(int N)
{
    int row = 0, col = 0;
    int boundary = N - 1;
    int sizeLeft = N - 1;
    int flag = 1;
    char move = 'r';
    int matrix[N][N] = {0};
    for (int i = 1; i < N * N + 1; i++)
    {
        matrix[row][col] = i;
        switch (move)
        {
        case 'r':
            col += 1;
            break;
        case 'l':
            col -= 1;
            break;
        case 'u':
            row -= 1;
            break;
        case 'd':
            row += 1;
            break;
        }
        if (i == boundary)
        {
            boundary += sizeLeft;
            if (flag != 2)
                flag = 2;
            else
            {
                flag = 1;
                sizeLeft -= 1;
            }
            switch (move)
            {
            case 'r':
                move = 'd';
                break;
            case 'd':
                move = 'l';
                break;
            case 'l':
                move = 'u';
                break;
            case 'u':
                move = 'r';
                break;
            }
        }
    }
    for (row = 0; row < N; row++)
    {
        for (col = 0; col < N; col++)
        {
            int n = matrix[row][col];
            printf("%d ", n);
        }
        printf("\n");
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    printSpiral(N);
    return 0;
}