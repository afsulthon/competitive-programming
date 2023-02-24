#include <cstdio>
using namespace std;

int main()
{
    int y;
    scanf("%d", &y);
    y++;
    while (y / 1000 == (y / 100) % 10 || y / 1000 == (y / 10) % 10 || y / 1000 == y % 10 || (y / 100) % 10 == (y / 10) % 10 || (y / 100) % 10 == y % 10 || (y / 10) % 10 == y % 10)
        y++;
    printf("%d", y);
    return 0;
}