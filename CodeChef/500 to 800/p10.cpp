#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int slices_req = n * x;
        if (slices_req % 4 == 0)
        {
            cout << slices_req / 4 << endl;
        }
        else
        {
            cout << slices_req / 4 + 1 << endl;
        }
    }
}
