#include <bits/stdc++.h>

using namespace std;

void printSubarrays(const vector<int>& arr) {
    int n = arr.size();
    
    for (int start = 0; start < n; ++start) {
        for (int end = start; end < n; ++end) {
            cout << "{ ";
            for (int i = start; i <= end; ++i) {
                cout << arr[i];
                if (i != end) cout << ", ";
            }
            cout << " }" << endl;
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    
    cout << "All subarrays of the given array are:\n";
    printSubarrays(arr);
    
    return 0;
}
