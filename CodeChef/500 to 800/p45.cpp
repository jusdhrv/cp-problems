#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        cout << min(n, k / x) << endl;
    }
}
