#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p, q, r, s;
        cin >> p >> q >> r >> s;
        int sum = p + q + r + s;
        if (2 * p > sum || 2 * q > sum || 2 * r > sum || 2 * s > sum)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
