// 2091. Removing minimum and maximum from an array
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n= nums.size();
        int minIndex=0, maxIndex=0;
        for (int i = 1; i < n; i++) {
        if (nums[i] < nums[minIndex]) minIndex = i;
        if (nums[i] > nums[maxIndex]) maxIndex = i;
    }

    if (minIndex > maxIndex) swap(minIndex, maxIndex);

    int removeFront = max(minIndex, maxIndex) + 1;
    int removeBack  = n - min(minIndex, maxIndex);
    int splitRemove = (minIndex + 1) + (n - maxIndex);

    return min({removeFront, removeBack, splitRemove});
    }
};
