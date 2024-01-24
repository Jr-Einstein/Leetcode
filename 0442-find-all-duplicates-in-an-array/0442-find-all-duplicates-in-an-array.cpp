class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int firstElement=nums[0];
       for(int i=1;i<nums.size();i++){
           if((firstElement^nums[i])==0){
               ans.push_back(nums[i]);
           }
           firstElement=nums[i];
       }
        return ans;
    }
};

// By AmanKS