#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    
    int b;
    cout << "enter position: ";
    cin >> b;

    int x=1<<b;
    
    if(a&x){
        cout<<"this bit is set";
    }else{
        cout<<"this bit is not set";
    }

    return 0;
}
