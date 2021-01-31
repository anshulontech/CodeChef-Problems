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

        vector<pair<string, string>> store;
        unordered_map<string, int> temp;

        for (int i = 0; i < n; i++)
        {
            string first, second;
            cin >> first >> second;
            store.push_back({first, second});
            temp[first]++;
        }

        for (int i = 0; i < n; i++)
            if (temp[store[i].first] == 1)
                cout << store[i].first << endl;
            else
                cout << store[i].first << " " << store[i].second << endl;
    }

    return 0;
}