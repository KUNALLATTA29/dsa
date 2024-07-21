class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> arr;
        int i=0;
        for(auto it:pushed){
            arr.push(it);
            while(!arr.empty() && i<popped.size() && arr.top()== popped[i] ){
                arr.pop();
                i++;
            }
        }
        return i==popped.size();
    }
};