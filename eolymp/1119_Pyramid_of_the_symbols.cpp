#include <cstdio>
using namespace std;

int main()
{
    int h, count = 0;
    char c;
    scanf("%c %d", &c, &h);
    int n = h, space_amount = h, char_amount = 1;
    for (int i = 0; i < h; i++)
    {
        count += n;
        n++;
    }
    printf("%d\n", count);
    for (int i = 0; i < h; i++)
    {
        for (int i = 0; i < space_amount - 1; i++)
            printf(" ");
        for (int i = 0; i < char_amount; i++)
            printf("%c", c);
        printf("\n");
        space_amount--;
        char_amount += 2;
    }
    return 0;
}