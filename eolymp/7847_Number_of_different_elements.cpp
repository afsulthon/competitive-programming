#include <cstdio>
using namespace std;

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N], count = 0;
    bool exist = false;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                exist = true;
                break;
            }
        }
        if (!exist)
            count++;
        exist = false;
    }
    printf("%d\n", count);
    return 0;
}