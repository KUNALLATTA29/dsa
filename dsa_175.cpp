class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int mini =0;
        int sum=0;
        for(auto it:nums){
            sum+=it;
            mini=min(sum,mini);
        }
        if(mini<0){
            return abs(mini)+1;
        }
        return 1;

        
    }
};