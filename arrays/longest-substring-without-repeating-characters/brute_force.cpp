class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxLength = 0;

        for (int i = 0; i < n; i++) {
            set<char> seen;

            for (int j = i; j < n; j++) {
                if (seen.count(s[j])) {
                    break;
                }

                seen.insert(s[j]);
                maxLength = max(maxLength, j - i + 1);
            }
        }

        return maxLength;
    }
};
