class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int max_sum = 0;
        int current_sum;
        for (int i = 0; i < nums.size() / 2; i++) {
            current_sum = nums[i] + nums[nums.size() - i - 1];
            max_sum = max(max_sum, current_sum);
        }
        return max_sum;
    }
};