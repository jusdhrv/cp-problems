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
        int curr_sum = a + b;
        if (21 - curr_sum <= 10 && 21 - curr_sum >= 1)
        {
            cout << 21 - curr_sum << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
