#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here (G > B > R)
    char p1, p2;
    cin >> p1 >> p2;
    if ((p1 == 'R' && p2 == 'B') || (p2 == 'R' && p1 == 'B'))
    {
        cout << 'R' << endl;
    }
    else if ((p1 == 'R' && p2 == 'G') || (p2 == 'R' && p1 == 'G'))
    {
        cout << 'R' << endl;
    }
    else if ((p1 == 'R' && p2 == 'G') || (p2 == 'R' && p1 == 'G'))
    {
        cout << 'R' << endl;
    }
    else if ((p1 == 'B' && p2 == 'G') || (p2 == 'B' && p1 == 'G'))
    {
        cout << 'B' << endl;
    }
    else
    {
        cout << p1 << endl;
    }
}
