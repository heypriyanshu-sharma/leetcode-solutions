class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;

            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];

                if (maxSum < sum) {
                    maxSum = sum;
                }
            }
        }

        return maxSum;
    }
};
