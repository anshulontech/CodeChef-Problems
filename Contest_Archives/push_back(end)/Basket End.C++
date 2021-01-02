// Link To Problem:-
// https://www.codechef.com/PEND2020/problems/ITGUY08

// Solution:-

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        map<int, int> A;
        int val;

        for (int i = 0; i < n + m; i++)
        {
            cin >> val;
            A[val]++;
        }

        for (auto itr = A.begin(); itr != A.end(); itr++)
            if (itr->second == 1)
                cout << itr->first << " ";

        cout << endl;
    }

    return 0;
}