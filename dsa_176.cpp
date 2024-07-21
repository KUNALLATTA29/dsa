class Solution {
public:
    int maxProduct(vector<int>& nums) {
        double   maxpro = nums[0];
        double  pro = 1;

        for(int i=0;i<nums.size();i++){
            pro *= nums[i];
            maxpro = max(pro,maxpro);

            if(pro == 0){
                pro = 1;
            }
        }
        pro=1;

        for(int i=nums.size()-1;i>=0;i--){
            pro *= nums[i];
            maxpro = max(pro,maxpro);

            if(pro == 0){
                pro = 1;
            }
        }

        return maxpro;
    }
};