class Solution {
public:
    bool judgeSquareSum(int c) {
        
        long long l=0,h=sqrt(c),m;
        while(l<=h){
            m=l*l + h*h;
            if(m==c){
                return true;
            }else if(m<c){
                l++;
            }else if(m>c){
                h--;
            }
        }
        return false;
    }
};