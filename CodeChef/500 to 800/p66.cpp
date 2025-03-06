#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        // option1 --> A then B
        int option1 = (500 - (2 * x)) + (1000 - (4 * (x + y)));
        // option2 --> B then A
        int option2 = (500 - (2 * (x + y))) + (1000 - (4 * y));

        cout << max(option1, option2) << endl;
    }
}
