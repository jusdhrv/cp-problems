#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int time_to_reach = y / x;
        if (time_to_reach <= z)
        {
            cout << (z - time_to_reach) << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}
