// Approach 1:-

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, res = 0, val;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> val;

        if (val % k == 0)
            res++;
    }

    cout << res << endl;

    return 0;
}