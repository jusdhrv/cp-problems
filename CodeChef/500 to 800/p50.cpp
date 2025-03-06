#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m;
        cin >> n >> k >> m;
        int total_candles_hold = k * m;
        if (n % total_candles_hold == 0)
        {
            cout << n / total_candles_hold << endl;
        }
        else
        {
            cout << (n / total_candles_hold) + 1 << endl;
        }
    }
}
