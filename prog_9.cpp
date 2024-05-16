#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    
    int b;
    cout << "Enter 2nd number: ";
    cin >> b;
    
    int c=0;
    for(int i=a;i<=b;i++){
        c ^=i;
    }
   cout<<c;
    return 0;
}