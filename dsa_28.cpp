
#include <bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        if (N % 3 == 0)
        {
            cout << "Divisible by 3" << endl;
        }
        else
        {
            cout << "Not divisible by 3" << endl;
        }
        if (N % 2 ==0)
        {
            cout << "Even" << endl;
        }
        else
        {
            cout << "Odd" << endl;
        }
    }
    return 0;
}