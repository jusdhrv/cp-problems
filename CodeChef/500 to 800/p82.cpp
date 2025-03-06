#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int h, x, y;
        cin >> h >> x >> y;
        if (y >= h)
        {
            cout << 1 << endl;
        }
        else
        {
            int diff = h - y;
            if (diff % x == 0)
            {
                cout << (diff / x) + 1 << endl;
            }
            else
            {
                cout << (diff / x) + 2 << endl;
            }
        }
    }
}
