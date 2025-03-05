#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int digit = 0;
        cin >> n;
        do
        {
            if (digit > 0)
            {
                cout << n % 10;
            }
            else
            {
                if (n % 10 > 0)
                {
                    cout << n % 10;
                    digit += 1;
                }
            }
            n /= 10;
        } while (n > 0);
        cout << endl;
    }
}
