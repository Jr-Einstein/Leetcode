class Solution {
public:
   Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int firstUniqChar(string s) {
        unordered_map<char, int> hmap;
     
        for(char c: s){
            hmap[c]++;
        }
        for(int i=0; i<s.size(); i++){
            if(hmap[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};