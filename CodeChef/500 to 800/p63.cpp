#include <bits/stdc++.h>
using namespace std;

int find_floor(int room)
{
    if (room % 10 == 0)
    {
        return room / 10;
    }
    else
    {
        return (room / 10) + 1;
    }
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        cout << abs(find_floor(y) - find_floor(x)) << endl;
    }
}
