// Link To Problem :-
// https://www.codechef.com/POPU2021/problems/EASYABC

// Solution:-

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    vector<pair<long long, long long>> store(3, {-1, -1});

    long long n = s.size();

    for (long long i = 0; i < n; i++)
        if (store[s[i] - 'a'].first == -1)
        {
            store[s[i] - 'a'].first = i;
            store[s[i] - 'a'].second = i;
        }
        else
            store[s[i] - 'a'].second = i;

    long long res = 0;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (i == j)
                continue;
            else
                res = max(res, store[j].second - store[i].first);

    cout << res << endl;

    return 0;
}