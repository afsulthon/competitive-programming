#include <cstdio>
using namespace std;

int main()
{
    char A[101][101], B[101][101];
    char res[4];
    int w, h, i, j;

    scanf("%d %d", &w, &h);
    for (i = 0; i < h; i++)
        scanf("%s", A[i]);
    for (i = 0; i < h; i++)
        scanf("%s", B[i]);
    scanf("%s", res);

    for (i = 0; i < h; i++)
    {
        for (j = 0; j < w; j++)
        {
            if (A[i][j] == '0' && B[i][j] == '0')
                printf("%c", res[0]);
            if (A[i][j] == '0' && B[i][j] == '1')
                printf("%c", res[1]);
            if (A[i][j] == '1' && B[i][j] == '0')
                printf("%c", res[2]);
            if (A[i][j] == '1' && B[i][j] == '1')
                printf("%c", res[3]);
        }
        puts("");
    }
    
    return 0;
}