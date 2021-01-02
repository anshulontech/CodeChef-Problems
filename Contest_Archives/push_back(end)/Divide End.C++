// Link To Problem:-
// https://www.codechef.com/PEND2020/problems/ITGUY03

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

        bool flag = false;

        while (n > 0)
            if (n % 2 == 0)
            {
                flag = true;
                break;
            }
            else
                n /= 10;

        if (flag)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }

    return 0;
}