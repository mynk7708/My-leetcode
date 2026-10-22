class Solution {
public:
    int maxii(vector<int>& nums) {
        int maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
            }
        }
        return maxi;
    }
    long long function(vector<int>& nums, int threshold, int divisor) {
        long long sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += ceil((double)nums[i] / (double)divisor);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = maxii(nums);
        int ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (function(nums, threshold, mid) <= threshold) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};