#include <bits/stdc++.h>
using namespace std;

class Queue {
private:
    vector<int> data;
    int frontIdx;

public:
    Queue() {
        frontIdx = 0;
    }

    void enqueue(int x) {
        data.push_back(x);
    }

    void dequeue() {
        if (!isEmpty()) {
            frontIdx++;
        }
    }

    int front() {
        if (!isEmpty()) {
            return data[frontIdx];
        }
        return -1;
    }

    bool isEmpty() {
        return frontIdx >= data.size();
    }

    int size() {
        return data.size() - frontIdx;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;

    q.dequeue();
    cout << q.isEmpty() << endl;

    return 0;
}
