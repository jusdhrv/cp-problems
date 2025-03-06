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
        int to_buy = (n / 5) * 4 + (n % 5);
        cout << to_buy << endl;
    }
}
