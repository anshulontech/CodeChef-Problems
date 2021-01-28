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

        string s, p;
        cin >> s >> p;

        int s1 = 0, p1 = 0;

        bool res = true;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                s1++;
            if (p[i] == '1')
                p1++;

            if (s1 < p1)
            {
                res = false;
                break;
            }
        }

        if (res && s1 == p1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}