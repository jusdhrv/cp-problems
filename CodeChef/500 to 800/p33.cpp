#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << max(a, max(b, c)) << endl;
    }
}
