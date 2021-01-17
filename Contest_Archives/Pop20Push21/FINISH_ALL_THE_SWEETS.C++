// Link To Problem:-
// https://www.codechef.com/POPU2021/problems/POPPUSH1

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

    unordered_map<long long, long long> store;
    long long val;
    for (long long i = 0; i < n; i++)
    {
        cin >> val;
        store[val]++;
    }
    long long res = 0;

    for (auto x : store)
        res = res + (x.second / 2) + ((x.second % 2) == 1);

    cout << res << endl;

    return 0;
}