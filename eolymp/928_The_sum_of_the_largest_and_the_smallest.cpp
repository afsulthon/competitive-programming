#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int number, smallest = 100, largest = -100;
    while (n--)
    {
        scanf("%d", &number);
        if (number < smallest)
            smallest = number;
        if (number > largest)
            largest = number;
    }
    printf("%d\n", largest + smallest);
    return 0;
}