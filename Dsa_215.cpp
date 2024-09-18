#include <bits/stdc++.h>
using namespace std;

class Stack {
private:
    int top;
    int capacity;
    int* array;

public:
    Stack(int size) {
        capacity = size;
        top = -1;
        array = new int[capacity];
    }

    ~Stack() {
        delete[] array;
    }

    bool isFull() {
        return top == capacity - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(int item) {
        if (!isFull()) {
            array[++top] = item;
        }
    }

    int pop() {
        if (!isEmpty()) {
            return array[top--];
        }
        return -1;
    }

    int peek() {
        if (!isEmpty()) {
            return array[top];
        }
        return -1;
    }
};

int main() {
    Stack stack(5);
    stack.push(10);
    stack.push(20);
    cout << stack.pop() << endl;
    cout << stack.peek() << endl;
    return 0;
}
