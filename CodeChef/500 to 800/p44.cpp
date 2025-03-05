#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l;
        cin >> l;
        char arr[l];
        for (int i = 0; i < l; i++)
        {
            cin >> arr[i];
        }
        for (int j = 0; j < l; j++)
        {
            if (arr[j] == 'A')
            {
                cout << 'T';
            }
            else if (arr[j] == 'T')
            {
                cout << 'A';
            }
            else if (arr[j] == 'C')
            {
                cout << 'G';
            }
            else
            {
                cout << 'C';
            }
        }
        cout << endl;
    }
}
