class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> map;
        for(auto it:nums){
            map[it]++;
        }
        for(auto it:map){
            if(it.second>=2){
                return it.first;
            }
        }
        return -1;
    }
};