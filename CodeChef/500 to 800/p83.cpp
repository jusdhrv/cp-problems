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
        int discount = min(a, min(b, c));
        cout << (a + b + c) - discount << endl;
    }
}
