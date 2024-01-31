#include <vector>

class Solution {
public:
   int missingNumber(std::vector<int>& nums) {
       int range = nums.size();
       int actualSum = (range * (range + 1)) / 2;
       int currSum = 0;
       for (int num : nums) {
           currSum += num;
       }
       return actualSum - currSum;
   }
};
