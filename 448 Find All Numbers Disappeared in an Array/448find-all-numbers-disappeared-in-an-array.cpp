class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>hash(n+1,0);
        vector<int>ans;
        int missing=0;
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(hash[i]==0){
                 missing=i;
                 ans.push_back(missing);
            }
        }
        return ans;
    }
};