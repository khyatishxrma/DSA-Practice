//3005. count elements with maximum frequency
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> freq(101, 0);
        for (int num : nums)
            freq[num]++;

        int maxFreq = *max_element(freq.begin(), freq.end());
        int count = 0;

        for (int f : freq)
            if (f == maxFreq)
                count += f;

        return count;
    }
};
