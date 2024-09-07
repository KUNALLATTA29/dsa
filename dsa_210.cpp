#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int num) {
    int reversed = 0;

    while (num != 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return reversed;
}

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    int reversedNumber = reverseNumber(number);

    cout<<reversedNumber;

    return 0;
}
