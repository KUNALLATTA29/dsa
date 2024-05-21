#include <iostream>
using namespace std;

int main() {
    int a;

    cout <<"enter credit score: ";
    cin >> a;
    
    
    if(a>100000){
        cout<<"good";
    }else if(a>50000){
        cout<<"fair";
    }else if(a>10000){
        cout<<"poor";
    }else{
        cout<<"very poor";
    }

    return 0;
}
