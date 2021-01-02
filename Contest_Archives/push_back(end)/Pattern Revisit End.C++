// Link To Problem:-
// https://www.codechef.com/PEND2020/problems/ANITGUY6

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
        for (int i = 0; i < n; i++)
        {
            if (i == 0 || i == n - 1)
            {
                cout << "*" << endl;
                continue;
            }

            cout << "*";

            if (i <= n / 2)
            {
                for (int j = 0; j < i - 1; j++)
                    cout << " ";
            }
            else
            {
                for (int j = 0; j < n - i - 2; j++)
                    cout << " ";
            }

            cout << "*" << endl;
        }
    }

    return 0;
}