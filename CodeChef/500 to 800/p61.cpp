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
        int eligible = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] >= 10 && arr[i] <= 60)
            {
                eligible += 1;
            }
        }
        cout << eligible << endl;
    }
}
