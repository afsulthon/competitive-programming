#include <cstdio>
#include <climits>
#include <algorithm>
using namespace std;

int divTermCount(int a, int b, int lcm, int num)
{
    return num / a + num / b - num / lcm;
}

int findNthTerm(int a, int b, int n)
{
    int low = 1, high = INT_MAX, mid;
    int lcm = (a * b) / __gcd(a, b);
    while (low < high)
    {
        mid = low + (high - low) / 2;
        if (divTermCount(a, b, lcm, mid) < n)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}

int main()
{
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    printf("%d\n", findNthTerm(a, b, n));
    return 0;
}
