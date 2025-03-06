#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cumulative_score1 = 0, cumulative_score2 = 0;
    int max_lead = 0;
    int winner = 0;
    
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        cumulative_score1 += a;
        cumulative_score2 += b;
        
        int current_lead = abs(cumulative_score1 - cumulative_score2);
        if (current_lead > max_lead) {
            max_lead = current_lead;
            winner = (cumulative_score1 > cumulative_score2) ? 1 : 2;
        }
    }
    
    cout << winner << " " << max_lead << endl;
    return 0;
}