#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        if (n % 2 == 1) {
            cout << -1 << endl;
        }
        else if (sum == 0) {
            cout << 0 << endl;
        }
        else {
            cout << abs(sum) / 2 << endl;
        }
        
    }
}
