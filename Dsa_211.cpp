#include <bits/stdc++.h>
using namespace std;

void push(vector<int>& stack, int value) {
    stack.push_back(value);
}

void pop(vector<int>& stack) {
    if (stack.empty()) {
        throw out_of_range("Stack is empty");
    }
    stack.pop_back();
}

int top(const vector<int>& stack) {
    if (stack.empty()) {
        throw out_of_range("Stack is empty");
    }
    return stack.back();
}

bool empty(const vector<int>& stack) {
    return stack.empty();
}

size_t size(const vector<int>& stack) {
    return stack.size();
}
