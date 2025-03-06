#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        int capacity = x * 100;
        if (n <= capacity)
        {
            cout << 0 << endl;
        }
        else
        {
            if (n % 100 == 0)
            {
                cout << (n / 100) - x << endl;
            }
            else
            {
                cout << ((n / 100) + 1) - x << endl;
            }
        }
    }
}
