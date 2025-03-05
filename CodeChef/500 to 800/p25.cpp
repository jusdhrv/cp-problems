#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int value_a = a * 20;
        int value_b = b * 10;
        if (value_a > value_b)
        {
            cout << "First" << endl;
        }
        else if (value_a < value_b)
        {
            cout << "Second" << endl;
        }
        else
        {
            cout << "Any" << endl;
        }
    }
}
