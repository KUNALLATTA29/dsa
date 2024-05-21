#include <iostream>
using namespace std;

int main() {
    int a;

    cout <<"enter stock: ";
    cin >> a;
    
    char b;
    cout<<"does customer has a valid membership (y/n): ";
    cin>>b;
    
    if(a>1 && b=='y'){
        cout<<"they can purchase this item";
    }else{
        cout<<"Out of stock";
    }

    return 0;
}
