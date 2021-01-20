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

        long long res = (n + 1) * n;

        cout << res << endl;
    }

    return 0;
}