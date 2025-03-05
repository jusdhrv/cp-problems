#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int seat;
        cin >> seat;
        if (100 - seat > seat - 1)
        {
            cout << "Left" << endl;
        }
        else
        {
            cout << "Right" << endl;
        }
    }
}
