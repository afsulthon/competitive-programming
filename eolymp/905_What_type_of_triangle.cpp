#include <cstdio>
using namespace std;

int main()
{
    int s1, s2, s3;
    scanf("%d %d %d", &s1, &s2, &s3);
    if (s1 == s2 && s2 == s3)
        puts("1");
    else if (s1 != s2 && s2 != s3 && s1 != s3)
        puts("3");
    else
        puts("2");
    return 0;
}