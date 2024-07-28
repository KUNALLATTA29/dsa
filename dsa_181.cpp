class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> map;
        bool ans = false;
        for(auto it:nums){
            map[it]++;
        }
        for(auto it:map){
            if(it.second>=2){
                ans=true;
            }
        }
        return ans;
    }
};