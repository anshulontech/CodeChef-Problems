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
        long long n, m;
        cin >> n >> m;

        vector<vector<long long>> arr(n, vector<long long>(m, 0));

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];

        long long error = 0;

        for (long long i = 0; i < m; i++)
        {
            long long val = arr[0][i];
            for (long long k = 0; k < n && k + i < m; k++)
                if (arr[k][k + i] != val)
                {
                    error++;
                    break;
                }
        }

        for (long long i = 1; i < n; i++)
        {
            long long val = arr[i][0];

            for (long long k = 0; k < m && k + i < n; k++)
                if (arr[k + i][k] != val)
                {
                    error++;
                    break;
                }
        }

        long long q;
        cin >> q;

        while (q--)
        {
            long long x, y, v;
            cin >> x >> y >> v;

            x--;
            y--;

            if ((x == 0 && y == m - 1) || (x == n - 1 && y == 0))
            {
                arr[x][y] = v;
                if (error == 0)
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;

                continue;
            }

            if (arr[x][y] != v)
            {
                long long z = arr[x][y];
                arr[x][y] = v;

                long long p = x - 1, q = y - 1;

                bool res = true, earlier = true;

                while (p >= 0 && q >= 0)
                {
                    if (arr[p][q] != v)
                        res = false;
                    if (arr[p][q] != z)
                        earlier = false;

                    p--;
                    q--;
                }

                p = x + 1;
                q = y + 1;

                while (p < n && q < m)
                {
                    if (arr[p][q] != v)
                        res = false;

                    if (arr[p][q] != z)
                        earlier = false;

                    p++;
                    q++;
                }

                if (res)
                    error--;
                else if (earlier)
                    error++;
            }

            if (error == 0)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}