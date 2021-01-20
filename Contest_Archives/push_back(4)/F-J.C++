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

        long long val = 1;

        long long mid = (n + 1) / 2;

        for (int i = 1; i <= mid; i++)
        {
            for (int j = 0; j < mid - i; j++)
                cout << " ";
            for (int j = 0; j < mid - 2; j++)
                cout << val++;
            cout << endl;
        }

        for (int i = 1; i < mid; i++)
        {
            for (int j = 0; j < i; j++)
                cout << " ";
            for (int j = 0; j < mid - 2; j++)
                cout << val++;
            cout << endl;
        }
    }

    return 0;
}