#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int diff = a - b;
        if (diff > 0)
        {
            cout << ">" << endl;
        }
        else if (diff < 0)
        {
            cout << "<" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }
}
