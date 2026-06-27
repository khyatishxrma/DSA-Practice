//3. longest substring without repeating char
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastIndex(256, -1);  // store last seen index of characters
        int maxLen = 0;
        int start = 0; // start of current window

        for (int i = 0; i < s.size(); i++) {
            if (lastIndex[s[i]] >= start) {
                // character already seen in current window
                start = lastIndex[s[i]] + 1;
            }
            lastIndex[s[i]] = i; // update last seen index
            maxLen = max(maxLen, i - start + 1);
        }

        return maxLen;
    }
};
