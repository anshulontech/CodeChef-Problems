// Link To Problem:-
// https://www.codechef.com/PEND2020/problems/ANITGUY7

// Solution:-

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        long long max_area = arr[n - 1] * arr[n - 2];
        long long min_area = arr[0] * arr[1];

        cout << max_area << " " << min_area << endl;
    }

    return 0;
}