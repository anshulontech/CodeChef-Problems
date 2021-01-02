// Link To Problem:-
// https://www.codechef.com/PEND2020/problems/ANITGUY4

// Solution:-

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long sum = 0;

        for (long i = 1; i <= n; i++)
            sum += (i * i * i);

        for (long i = n - 1; i > 0; i--)
            sum += (i * i * i);

        cout << sum << endl;
    }

    return 0;
}