#include <iostream>
using namespace std;

int main() {
    int a;

    cout <<"enter a number: ";
    cin >> a;

    if (a <= 0) {
        cout << "Invalid input";
    } else {
        while (a != 1) {
            if (a % 2 != 0) {
                cout <<" is not power of 2.";
                return 0;
            }
            a /= 2;
        }
        cout << "It is power of 2.";
    }

    return 0;
}
