#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> n >> x;
        cout << ((n / 3) * x * 2) + (n % 3) * x << endl;
    }
}
