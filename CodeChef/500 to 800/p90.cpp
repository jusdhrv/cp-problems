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
        if (n == 1)
        {
            cout << "no" << endl;
        }
        else
        {
            int upper_bound = sqrt(n);
            bool isPrime = true;
            for (int i = 2; i <= upper_bound; i++)
            {
                if (n % i == 0)
                {
                    cout << "no" << endl;
                    isPrime = false;
                    break;
                }
            }
            if (isPrime == true)
            {
                cout << "yes" << endl;
            }
        }
    }
}
