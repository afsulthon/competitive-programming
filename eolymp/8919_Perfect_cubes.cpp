#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    while (n > i * i * i)
    {
        printf("%d ", i * i * i);
        i++;
    }
    return 0;
}