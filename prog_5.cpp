#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter the bit position you want to toggle (0-31): ";
    cin >> b;

    
    int x = 1 << b;

    
    a = a ^ x;

    cout << "new number: " << a << endl;

    return 0;
}
