class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        for (int i = 1; i * i < num; i++) {
            if (num % i == 0) {
                sum = sum + i;
                 if (i * i != num) {
                sum = sum + num / i;
            }
            }
        }
        if (sum - num == num)
            return true;
        else
            return false;
    }
};