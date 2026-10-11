class Solution {
public:
    vector<int> maxPrimes(int n, int s) {

        long long sum = 0;
        vector<int> ans;

        for (int i = 2; i <= n; i++) {
            int cnt = 0;
            for (int j = 1; j * j <= i; j++) {
                if (i % j == 0) {
                    cnt++;
                    if (j * j != i) {
                        cnt++;
                    }
                }

                if (cnt > 2) {
                    break;
                }
            }

            if (cnt == 2) {

                if (sum + i <= s) {
                    sum = sum + i;
                    ans.push_back(i);
                } else {

                    break;
                }
            }
        }
        return ans;
    }
};
