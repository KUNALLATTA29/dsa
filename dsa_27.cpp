// Update the blanks in the code below
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>> N;
        if (N <=100)
        {
            cout << "Good" << endl;
        }

        else if (N >100 && N<=200)
        {
            cout << "Better" << endl;
        }

        else
        {
            cout << "Best" << endl;
        }
    }
    return 0;
}