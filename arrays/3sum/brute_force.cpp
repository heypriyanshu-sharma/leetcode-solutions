class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        vector<int> triplet = {nums[i], nums[j], nums[k]};
                        sort(triplet.begin(), triplet.end());

                        bool found = false;
                        for (auto& t : ans) {
                            if (t == triplet) {
                                found = true;
                                break;
                            }
                        }

                        if (!found) {
                            ans.push_back(triplet);
                        }
                    }
                }
            }
        }

        return ans;
    }
};
