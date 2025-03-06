#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int rounds = 0;
        int timet = 0;
        while (n > 1)
        {
            rounds += 1;
            timet += (a + b);
            n /= 2;
        }
        cout << timet - b << endl;
    }
}
