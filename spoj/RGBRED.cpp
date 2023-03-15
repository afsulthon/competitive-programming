#include <cstdio>
using namespace std;
int t, n, cntR, cntG, cntB;
char s[100001];

int main()
{
    scanf("%d", &t);
    while (t--)
    {
        cntR = 0;
        cntG = 0;
        cntB = 0;
        scanf("%d", &n);
        scanf("%s", s);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
                cntR++;
            if (s[i] == 'G')
                cntG++;
            if (s[i] == 'B')
                cntB++;
        }
        if ((cntR == 0 && cntG == 0) || (cntR == 0 && cntB == 0) || (cntG == 0 && cntB == 0))
            printf("%d\n", n);
        else if ((cntR & 1) == (cntG & 1) && (cntG & 1) == (cntB & 1))
            puts("2");
        else
            puts("1");
    }
    return 0;
}