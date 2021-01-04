// Link To Problem:-
// https://www.codechef.com/INRO2021/problems/COUPLING

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

    while (n--)
    {
        long long girl;
        cin >> girl;

        if (girl == 2)
            cout << 1 << endl;
        else
            cout << (girl ^ 2) << endl;
    }

    return 0;
}