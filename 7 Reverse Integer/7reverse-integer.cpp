class Solution {
public:
    int reverse(int x) {
        
        int revNum=0;
        for(;x!=0;x=x/10){
            int ld=x%10;
            if(revNum > INT_MAX/10 || revNum < INT_MIN/10){
                return 0;
             }
             revNum= (revNum*10)+ld;
             
        }
        return revNum;
    }
};