#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--) {
        int p,q;
        cin >> p >> q;
        int turn = (p+q)%4;
        if (turn == 0 || turn == 1) {
            cout << "Alice" << endl;
        }
        else {
            cout << "Bob" << endl;
        }
    }
        
}
