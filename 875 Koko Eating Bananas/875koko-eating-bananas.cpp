class Solution {
public:
    int maxmum(vector<int>& piles) {
        int maxi = INT_MIN;
        for (int i = 0; i < piles.size(); i++) {

            if (maxi < piles[i])
                maxi = piles[i];
        }
        return maxi;
    }
    long long hehe(vector<int>& piles, int mid) {
        long long hours = 0;
        for (int i = 0; i < piles.size(); i++) {
       hours+= ceil((double)piles[i] / (double)mid);
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = maxmum(piles);
        int ans =high;
        while (low <= high) {

            int mid = (low + high) / 2;
           long long totalhrs = hehe(piles, mid); 
            if (totalhrs <= h) {
                ans = mid;
                high = mid - 1;

            } else
                low = mid + 1;
        }
        return ans;
    }
};