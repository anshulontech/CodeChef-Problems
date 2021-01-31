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

        long long val;
        vector<long long> arr0(32, 0), arr1(32, 0);
        vector<long long> values;

        for (long long i = 0; i < n; i++)
        {
            cin >> val;
            values.push_back(val);
            int k = 0;
            while (k < 32)
            {
                if (val % 2 == 0)
                    arr0[k]++;
                else
                    arr1[k]++;
                k++;
                val /= 2;
            }
        }

        long long num = 0;

        for (int i = 0; i < 32; i++)
        {
            if (arr0[i] < arr1[i])
                num += pow(2, i);
        }

        long long res = 0;

        for (int i = 0; i < n; i++)
            res += (values[i] ^ num);

        cout << res << endl;
    }

    return 0;
}