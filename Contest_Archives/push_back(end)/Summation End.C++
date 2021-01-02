// Link To Problem:-
// https://www.codechef.com/PEND2020/problems/ITGUY00

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

        int val;
        long long res = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> val;

            res += (val % 6);

            if (val % 6 == 0)
                res += 6;
        }

        cout << res << endl;
    }

    return 0;
}