class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[i]);

            int temp = nums[i];
            int ld = 0;
            while (temp != 0) {
                int rem = temp % 10;
                ld = (ld * 10) + rem;
                temp = temp / 10;
            }

            ans.push_back(ld);
        }
        int cnt = 1;
        sort(ans.begin(), ans.end());
        for (int i = 1; i < ans.size(); i++) {
            if (ans[i] != ans[i - 1]) {
                cnt++;
            }
        }
        return cnt;
    }
};