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

        vector<long long> arr(n + 1, INT_MIN);

        arr[0] = 0;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;

            long long temp = arr[val];

            arr[val] = max(arr[val], arr[0] + 1);
            arr[0] = max(arr[0], temp + 1);
        }

        long long res = n - arr[0];
        cout << res << endl;
    }

    return 0;
}
