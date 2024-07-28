class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> map;
        for(auto it:nums){
            map[it]++;
        }
        for(auto it:map){
            if(it.second==1){
                return it.first;
            }
        }
        return -1;
    }
};