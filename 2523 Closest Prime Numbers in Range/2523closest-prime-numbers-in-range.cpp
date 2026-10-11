class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> store;
        vector<bool> isPrime(right + 1, true);
        if (right >= 0)
            isPrime[0] = false;
        if (right >= 1)
            isPrime[1] = false;

        for (int i = 2; i * i <= right; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= right; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        // Collect the primes that fall within your [left, right] range
        for (int i = max(2, left); i <= right; i++) {
            if (isPrime[i]) {
                store.push_back(i);
            }
        }

        if (store.size() < 2) {
            return {-1, -1};
        }
        vector<int> ans;
        int mini = INT_MAX, j = 0;
        while (j < store.size() - 1) {
            if (abs(store[j] - store[j + 1]) < mini) {
                mini = abs(store[j] - store[j + 1]);
                ans.clear();
                ans.push_back(store[j]);
                ans.push_back(store[j + 1]);
            }
            j++;
        }
        return ans;
    }
};