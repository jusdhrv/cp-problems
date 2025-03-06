#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, a3, b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        int score_a = (a1 + a2 + a3) - min(a1, min(a2, a3));
        int score_b = (b1 + b2 + b3) - min(b1, min(b2, b3));

        if (score_a > score_b)
        {
            cout << "Alice" << endl;
        }
        else if (score_b > score_a)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }
}
