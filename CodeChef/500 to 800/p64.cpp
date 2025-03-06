#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, x, b, y;
        cin >> a >> x >> b >> y;
        // (a/x) _ (b/y)
        if (a * y > b * x)
        {
            cout << "Alice" << endl;
        }
        else if (a * y < b * x)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Equal" << endl;
        }
    }
}
