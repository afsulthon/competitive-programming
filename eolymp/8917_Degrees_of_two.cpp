#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int deg_of_two = 2;
    while (n > deg_of_two)
    {
        printf("%d ", deg_of_two);
        deg_of_two *= 2;
    }
    return 0;
}