// Link To Problem:-
// https://www.codechef.com/PEND2020/problems/ANITGUY8

// Solution:-

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        map<long long, long long> A;
        long long val;

        for (long long i = 0; i < n; i++)
        {
            cin >> val;
            A[val]++;
        }

        for (auto x : A)
            if (x.second > k)
                cout << x.first << " ";

        cout << endl;
    }

    return 0;
}