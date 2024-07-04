class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        map<char,int> arr = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000} 
        };
        int pre=0;
        for(int i=s.length()-1;i>=0;i--){
            int k=arr[s[i]];
            if(k<pre){
                sum-=k;
            }else{
                sum+=k;
            }
            pre=k;
        }
        
        return sum;
    }
};