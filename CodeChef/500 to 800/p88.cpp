#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int j = (n - 1); j >= 0; j--)
        {
            if (arr[j] != 0)
            {
                cout << j << endl;
                break;
            }
        }
    }
}
