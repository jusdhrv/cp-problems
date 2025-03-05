#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x % 3 == 0)
        {
            cout << "Normal" << endl;
        }
        else if (x % 3 == 1)
        {
            cout << "Huge" << endl;
        }
        else
        {
            cout << "Small" << endl;
        }
    }
}
