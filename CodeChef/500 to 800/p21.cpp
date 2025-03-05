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
        int arr[l];
        int above = 0;
        for (int i = 0; i < l; i++)
        {
            cin >> arr[i];
            if (arr[i] >= 1000)
            {
                above += 1;
            }
        }
        cout << above << endl;
    }
}
