#include <iostream>
using namespace std;

int main() {
    int a;

    cout <<"enter quantity of books(cost per book is 500): ";
    cin >> a;
    
    int cost =a*500;
    
    if(a<=5){
        cout<<cost;
    }else if(a>5 && a<=10){
        cout<<cost-(cost*.10);
    }else if(a>10){
        cout<<cost-(cost*.20);
    }

    return 0;
}
