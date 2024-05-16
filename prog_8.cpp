#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    
    int c = 0;
    
    while ((a & 1) == 0) {
        c++;
        a = a >> 1;
    }
    
    cout << c;
    return 0;
}