// Link To Problem:-
// https://www.codechef.com/INRO2021/problems/CHRIST

// Solution:-

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin >> n;

    long long N = 1e7 + 5;

    vector<bool> isPrime(N, true);

    isPrime[0] = false, isPrime[1] = false;

    for (long long i = 2; i <= sqrt(N); i++)
        if (isPrime[i])
        {
            for (long long p = i * i; p < N; p += i)
                isPrime[p] = false;
        }

    vector<long long> ans;
    ans.push_back(n);

    for (long long i = 0; i < N; i++)
        if (isPrime[i])
        {
            ans.push_back(i * n);
            if (ans.size() == n)
                break;
        }

    for (long long i = 0; i < n; i++)
        cout << ans[i] << " ";
    return 0;
}