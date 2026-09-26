class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int j = 1;
        for (int i = 0; i < nums.size(); i = i + 2) {
            if (nums[i] % 2 != 0) {
                while (j < nums.size() && nums[j] % 2 != 0) {
                    j = j + 2;
                }
                swap(nums[i], nums[j]);
            }
        }

        return nums;
    }
};