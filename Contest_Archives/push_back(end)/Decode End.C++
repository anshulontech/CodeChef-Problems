// Link To Problem:-
// https://www.codechef.com/PEND2020/problems/ITGUY59

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
            for (int j = i; j > 0; j--)
                cout << j;

            for (int j = 0; j < n - i; j++)
                cout << j;

            cout << endl;
        }
    }

    return 0;
}