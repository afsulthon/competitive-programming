#include <cstdio>
using namespace std;

int main()
{
    int t, n;
    char P1, P2;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int scoreP1 = 0, scoreP2 = 0;
        while (n--)
        {
            scanf(" %c %c", &P1, &P2);
            if (P1 == 'R' && P2 == 'S' || P1 == 'P' && P2 == 'R' || P1 == 'S' && P2 == 'P')
                scoreP1++;
            if (P1 == 'R' && P2 == 'P' || P1 == 'P' && P2 == 'S' || P1 == 'S' && P2 == 'R')
                scoreP2++;
        }
        if (scoreP1 > scoreP2)
            puts("Player 1");
        else if (scoreP1 < scoreP2)
            puts("Player 2");
        else
            puts("TIE");
    }
    return 0;
}