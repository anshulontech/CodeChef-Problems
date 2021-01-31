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

        vector<long long> A(n), B(n), forward(n + 1, 0), backward(n + 1, 0);

        for (int i = 0; i < n; i++)
            cin >> A[i];
        for (int i = 0; i < n; i++)
            cin >> B[i];

        for (int i = 1; i < n + 1; i++)
        {
            forward[i] = forward[i - 1] + A[i - 1];
            backward[n - i] = backward[n - i + 1] + B[n - i];
        }

        long long maxSum = 0;
        for (int i = 0; i < n + 1; i++)
            maxSum = max(maxSum, forward[i] + backward[i]);

        cout << maxSum << endl;
    }

    return 0;
}