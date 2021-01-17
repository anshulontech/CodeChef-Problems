// Link To Problem:-
// https://www.codechef.com/POPU2021/problems/BXRED

// Solution:-

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    int half = lower_bound(arr.begin(), arr.end(), arr[n - 1] / 2) - arr.begin();
    while (half < n - 1 && arr[half] == arr[half + 1])
        half++;
    unordered_set<long long> visited;
    long long count = 0;

    for (long long i = n - 1; i >= 0; i--)
    {
        if (visited.find(i) != visited.end())
            continue;

        while (half >= 0 && (arr[half] * 2 > arr[i] || visited.find(half) != visited.end()))
            half--;

        if (half >= 0)
        {
            count++;
            visited.insert(half);
        }

        visited.insert(i);
    }

    cout << n - count << endl;

    return 0;
}