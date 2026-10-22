class Solution {
public:
    int maxii(vector<int>& bloomDay) {
        int maxi = INT_MIN;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] > maxi) {
                maxi = bloomDay[i];
            }
        }
        return maxi;
    }

    int minii(vector<int>& bloomDay) {
        int mini = INT_MAX;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] < mini) {
                mini = bloomDay[i];
            }
        }
        return mini;
    }

    bool possibility(vector<int>& bloomDay, int m, int k, int day) {
        int cnt = 0;
        int B = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= day) {
                cnt++;
            } else {
                B += (cnt / k);
                cnt = 0;
            }
        }
        B += (cnt / k);
        if (B >= m)
            return true;
        else
            return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)m * k > bloomDay.size())
            return -1;
        int low = minii(bloomDay);
        int high = maxii(bloomDay);
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (possibility(bloomDay, m, k, mid) == true) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};