class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        while(!nums.empty()){
            int one = nums.front();
            nums.erase(nums.begin());

            int two = nums.front();
            nums.erase(nums.begin());

            arr.push_back(two);
            arr.push_back(one);
            
        }
        return arr;
    }
};