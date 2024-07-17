class Solution {
public:
    int arrangeCoins(int n) {
        int result = 0;
        int i = 1;
        while(n>=i){
            result++;
            n-=i;
            i++;
        }
        return result;
    }
};