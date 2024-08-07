#include <iostream>

using namespace std;

unsigned long long factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorialRecursive(n - 1);
    }
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        unsigned long long result = factorialRecursive(number);
        cout << "Factorial of " << number << " = " << result << endl;
    }

    return 0;
}
