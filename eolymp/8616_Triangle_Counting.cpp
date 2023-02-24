#include <cstdio>
using namespace std;

int main()
{
    long long n;
    for(;;)
    {
        scanf("%lld", &n);
        if (n < 3)
            return 0;
        long long count;
        if (n == 3)
            count = 0;
        else
        {
            count = 1;
            long long add = 2, add_inc = 2;
            for (int i = 0; i < n - 4; i++)
            {
                count += add;
                add += add_inc;
                if (i & 1 == 1)
                    add_inc++;
            }
        }
        printf("%lld\n", count);
    }
    return 0;
}

/*
3  -> 0
4  -> 1
5  -> 1 + 2
6  -> 1 + 2 + 4
7  -> 1 + 2 + 4 + 6
8  -> 1 + 2 + 4 + 6 + 9
9  -> 1 + 2 + 4 + 6 + 9 + 12
10 -> 1 + 2 + 4 + 6 + 9 + 12 + 16
11 -> 1 + 2 + 4 + 6 + 9 + 12 + 16 + 20
12 -> 1 + 2 + 4 + 6 + 9 + 12 + 16 + 20 + 25
13 -> 1 + 2 + 4 + 6 + 9 + 12 + 16 + 20 + 25 + 30
14 -> 1 + 2 + 4 + 6 + 9 + 12 + 16 + 20 + 25 + 30 + 36
15 -> 1 + 2 + 4 + 6 + 9 + 12 + 16 + 20 + 25 + 30 + 36 + 42
16 -> 1 + 2 + 4 + 6 + 9 + 12 + 16 + 20 + 25 + 30 + 36 + 42 + 49
17 -> 1 + 2 + 4 + 6 + 9 + 12 + 16 + 20 + 25 + 30 + 36 + 42 + 49 + 56
*/