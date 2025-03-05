#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        string t;
        cin >> s;
        cin >> t;
        for (int i = 0; i < (s.length()); i++)
        {
            if (s[i] == t[i])
            {
                cout << "G";
            }
            else
            {
                cout << "B";
            }
        }
        cout << endl;
    }
}
