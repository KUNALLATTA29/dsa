#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout <<"enter three sides of triangle: ";
    cin >> a >> b>>c;

    if(a+b>c || a+c>b || b+c>a ){
        cout<<"triangle is valid";
    }else{
        cout<<"it's not valid";
    }

    return 0;
}
