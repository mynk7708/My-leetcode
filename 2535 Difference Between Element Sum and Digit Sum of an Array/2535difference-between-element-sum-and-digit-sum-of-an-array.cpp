class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int dsum=0;
        int esum=0;
        int diff;
        for(int i=0;i<n;i++){
            esum=nums[i]+esum;
            while(nums[i]!=0){
                int rem=nums[i]%10;
                nums[i]=nums[i]/10;
                dsum=dsum+rem;
            }
            diff = abs(dsum - esum);

        }
        return diff;
    }
};