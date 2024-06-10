class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // Ensure k is within the bounds of the array size
        if (k == 0) return;  // If k is 0, no rotation is needed

        int temp[k];
        // Store the first k elements
        for (int i = 0; i < k; i++) {
            temp[i] = nums[n - k + i];
        }
        // Shift the rest of the array to the left by k positions
        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }
        // Copy the first k elements to the beginning of the array
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};
