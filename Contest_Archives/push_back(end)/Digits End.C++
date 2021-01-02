// Link To Problem:-
// https://www.codechef.com/PEND2020/problems/ANITGUY9

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
        long long n;
        cin >> n;

        long long sum = 0, temp = n;

        while (temp)
        {
            sum += (temp % 10);
            temp /= 10;
        }

        if (n % sum == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}