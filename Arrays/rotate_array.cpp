//189 Rotate array
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        reverse(nums.begin(), nums.end()); //step 1 of reversing the array
        reverse(nums.begin(), nums.begin()+k); //reverse till k
        reverse(nums.begin()+k, nums.end());
    }
};
