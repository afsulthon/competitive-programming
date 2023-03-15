#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
#define ll long long
using namespace std;
using boost::multiprecision::cpp_int;
const int MOD = 1e9 + 7;

int calc(int base, cpp_int exp)
{
    ll res = 1, base_pow = base % MOD;
    while (exp > 0)
    {
        if (exp & 1)
            res = (res * base_pow) % MOD;
        base_pow = (base_pow * base_pow) % MOD;
        exp >>= 1;
    }
    return res;
}

int main()
{
    int T;
    cpp_int N, K;
    ll ans, A1;
    cin >> T;
    while (T--)
    {
        cin >> N >> K;
        K--;
        K %= MOD;
        ans = (ll)K;
        if (N & 1)
            ans = ans * (-1);
        A1 = calc((int)K, N);
        printf("%lld\n", (A1 + ans + MOD) % MOD);
    }
    return 0;
}