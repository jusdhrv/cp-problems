#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int rank_diff = y - x;
        if (rank_diff % 8 == 0)
        {
            cout << rank_diff / 8 << endl;
        }
        else
        {
            cout << (rank_diff / 8) + 1 << endl;
        }
    }
}
