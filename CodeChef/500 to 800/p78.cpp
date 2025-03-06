#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int r, o, c;
    cin >> r >> o >> c;
    int remaining_score = r - c;
    int remaining_overs = 20 - o;
    int pos_score = remaining_overs * 36;
    if (pos_score > remaining_score)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
