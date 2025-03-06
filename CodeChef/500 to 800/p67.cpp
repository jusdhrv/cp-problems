#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a > b && c > a) || (a > c && b > a))
        {
            cout << a << endl;
        }
        else if ((b > a && c > b) || (b > c && a > b))
        {
            cout << b << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
}
