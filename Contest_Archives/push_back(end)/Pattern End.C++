// Link to Problem:-
// https://www.codechef.com/PEND2020/problems/ITGUY02

// Solution:-

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
                cout << ' ';

            cout << "*";

            if (i == 0)
            {
                cout << endl;
                continue;
            }

            for (int j = 0; j < 2 * i - 1; j++)
                cout << " ";

            cout << "*" << endl;
        }

        for (int i = 0; i < 2 * n - 1; i++)
            cout << "*";

        cout << endl;
    }

    return 0;
}