#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int n_temp = n;

        int digit_reverse = 0;
        while (n_temp > 0)
        {
            digit_reverse = (10 * digit_reverse) + (n_temp % 10);
            n_temp /= 10;
        }

        if (digit_reverse - n == 0)
        {
            cout << "wins" << endl;
        }
        else
        {
            cout << "loses" << endl;
        }
    }
}
