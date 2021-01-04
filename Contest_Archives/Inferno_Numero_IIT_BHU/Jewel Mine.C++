// Link To Problem:-
// https://www.codechef.com/INRO2021/problems/JEWELMIN

// Solution:-

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

long long power(long long m, long long n, long long mod)
{
    if (m == 0)
        return 0;
    long long res = 1;
    m %= mod;

    while (n > 0)
    {
        if (n & 1)
            res = (res * m) % mod;

        n = n >> 1;
        m = (m * m) % mod;
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;

    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        long long ans = 1;
        long long mod = 1000000007;

        n /= 2;

        n = n * (n + 1);

        cout << power(m, n, mod) << endl;
    }

    return 0;
}