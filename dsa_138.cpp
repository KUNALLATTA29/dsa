class Solution {
public:
    bool isPalindrome(int x) {
        int tem=x;
        long rev=0;
        while(x>0){
            int d=x%10;
            rev=rev*10+d;
            x/=10;
        }
        if(tem==rev){
            return true;
        }else{
            return false;
        }
    }
};