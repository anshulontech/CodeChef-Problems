// Link To Problem:-
// https://www.codechef.com/PEND2020/problems/ITGUY04

// Series be like 0 + 0*0, 0 + 1*1, 1 + 2*2, 5 + 3*3, 14 + 4*4, 30 + 5*5 and so on...

// Solution:-

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long long val = 0;

        for (int i = 0; i < n; i++)
            val += (i * i);

        cout << val << endl;
    }

    return 0;
}