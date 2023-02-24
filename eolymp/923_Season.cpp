#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 12 || n <= 2)
        puts("Winter");
    else if (n >= 3 && n <= 5)
        puts("Spring");
    else if (n >= 6 && n <= 8)
        puts("Summer");
    else
        puts("Autumn");
    return 0;
}