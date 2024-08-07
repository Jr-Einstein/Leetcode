class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>s;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            s[nums1[i]]=1;;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(s.find(nums2[i])!=s.end() && s[nums2[i]]==1)
            {
              ans.push_back(nums2[i]);
              s[nums2[i]]=0;
             }
            }
        return ans;
    }
};