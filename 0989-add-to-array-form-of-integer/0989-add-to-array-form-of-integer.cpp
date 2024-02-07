class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>ans;
        int carry=0;
        for(int i=num.size()-1; i>=0 || k>0 ; i--){
            int sum=0;
            if(i>=0){
               sum = num[i];
            }
            sum =  sum + carry + k%10;
            ans.push_back(sum%10);
            carry=sum/10;
            k/=10;
        }
        if(carry){
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};