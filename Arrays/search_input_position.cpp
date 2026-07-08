//35. search input position
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (nums[mid] == target)
                return mid;

            (nums[mid] < target) ? l = mid + 1 : r = mid - 1;
        }
        return l;
    }
};
