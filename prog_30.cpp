#include <iostream>
using namespace std;

int main() {
    int a;

    cout <<"enter score: ";
    cin >> a;

    if (a>=0 && a<=100) {
        if(a>=50){
            cout<<"passed";
        }else{
            cout<<"failed";
        }
    }else{
        cout<<"invalid input";
    }

    return 0;
}
