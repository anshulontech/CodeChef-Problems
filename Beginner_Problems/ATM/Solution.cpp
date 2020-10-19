// Approach 1:-

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X;
    float Y;

    cin >> X >> Y;

    if (X + 0.5 < Y && X % 5 == 0)
        cout << Y - X - 0.50 << endl;
    else
        cout << Y << endl;

    return 0;
}