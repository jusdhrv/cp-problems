#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int tuesdays = ((n-1)/7);
        if ((n-1)%7 == 0) {
            cout << tuesdays << endl;
        }
        else {
            cout << tuesdays + 1 << endl;
        }
    }
}
