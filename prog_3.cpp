#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    cout << "Before swap: " << a << " " << b << endl;
    
    if (a == b) {
        cout << "After swap: " << a << " " << b;
    } else {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
        cout << "After swap: " << a << " " << b;
    }
    
    return 0;
}
