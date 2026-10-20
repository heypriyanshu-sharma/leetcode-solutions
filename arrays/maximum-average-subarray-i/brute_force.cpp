class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAverage = -1e9;
        int n = nums.size();

        for (int i = 0; i <= n - k; i++) {
            double sum = 0;

            for (int j = i; j < i + k; j++) {
                sum += nums[j];
            }

            double average = sum / k;
            maxAverage = max(maxAverage, average);
        }

        return maxAverage;
    }
};
