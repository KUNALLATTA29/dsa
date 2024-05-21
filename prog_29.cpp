#include <iostream>
using namespace std;

int main() {
    int a;

    cout <<"enter age: ";
    cin >> a;

    if (a<=12) {
        cout << "child";
    }else if(a>=13 && a<=19){
        cout<<"teenager";
    }else if(a>=20 && a<=59){
        cout<<"adult";
    }else{
        cout<<"senior";
    }

    return 0;
}
