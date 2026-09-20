class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long RevN=0;
        int org=x;
        for(;x!=0;x=x/10){
            int ld=x%10;
            RevN=(RevN*10)+ld;
        }
        if(org==RevN){
            return true;
        }else 
        return false;
    }
};