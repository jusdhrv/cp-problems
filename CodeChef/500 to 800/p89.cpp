#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string arr[n];
        int count_1 = 0;
        int count_2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == "START38")
            {
                count_1 += 1;
            }
            else
            {
                count_2 += 1;
            }
        }
        cout << count_1 << " " << count_2 << endl;
    }
}
