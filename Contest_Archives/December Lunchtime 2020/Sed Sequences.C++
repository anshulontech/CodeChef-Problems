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

        long long sum = 0, val;

        for (int i = 0; i < n; i++)
        {
            cin >> val;
            sum += val;
        }

        if (sum % k == 0)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }

    return 0;
}