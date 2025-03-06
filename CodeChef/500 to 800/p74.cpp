#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, r;
        cin >> x >> y >> r;
        int total = x + (r / 30);
        if (total % y == 0)
        {
            cout << total / y << endl;
        }
        else
        {
            cout << (total / y) + 1 << endl;
        }
    }
}
