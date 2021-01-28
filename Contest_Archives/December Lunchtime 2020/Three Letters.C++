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
        string s;
        cin >> s;
        vector<long long> arr(26, 0);

        for (auto c : s)
            arr[c - 'a']++;

        long long res = 0, first = 0, second = 0;

        for (auto x : arr)
        {
            second += x / 2;
            first += x % 2;
        }

        if (first >= second)
        {
            res = second;
        }
        else
        {
            res += first;
            second -= first;

            long long val = second / 3;
            res += (val * 2);

            second %= 3;

            if (second == 2)
                res++;
        }

        cout << res << endl;
    }

    return 0;
}