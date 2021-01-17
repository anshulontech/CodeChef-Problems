// Link To Problem:-
// https://www.codechef.com/POPU2021/problems/TSOH

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

    std::vector<long long> arr(n);

    for (long long i = 0; i < n; i++)
        cin >> arr[i];

    vector<long long> maxLeft(n, -1e18), maxRight(n, -1e18);

    long long sum = 0;
    long long maximum = -1e18;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maximum = max(maximum, sum);
        if (sum < 0)
            sum = 0;

        maxLeft[i] = maximum;
    }

    sum = 0, maximum = -1e18;
    for (int i = n - 1; i >= 0; i--)
    {
        sum += arr[i];
        maximum = max(maximum, sum);
        if (sum < 0)
            sum = 0;
        maxRight[i] = maximum;
    }

    maximum = -1e18;

    for (long long i = 0; i < n - 1; i++)
        maximum = max(maximum, maxLeft[i] + maxRight[i + 1]);

    cout << maximum << endl;

    return 0;
}