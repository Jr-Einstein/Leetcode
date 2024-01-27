class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Step 1: Iterate over the numbers in the array.
        for (int i = 0; i < nums.size(); i++) {
            // Step 2: For each number, iterate over the rest of the numbers in the array.
            for (int j = i + 1; j < nums.size(); j++) {
                // Step 3: Check if the current two numbers add up to the target.
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        // Step 4: If no such pair is found, return an empty vector.
        return {};
    }
};