#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        int time_x = a * y;
        int time_y = b * x;

        if (time_x < time_y)
        {
            cout << "Chef" << endl;
        }
        else if (time_x > time_y)
        {
            cout << "Chefina" << endl;
        }
        else
        {
            cout << "Both" << endl;
        }
    }
}
