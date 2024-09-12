class Solution {
public:
    int countConsistentStrings(string allow, vector<string>& words) {
        int allowedMask = maskString(allow);
        int consistStrCnt = 0;
        for(auto & word : words){
            int wordMask = maskString(word);
            if((wordMask | allowedMask) == allowedMask)consistStrCnt++; 
        }
        return consistStrCnt;
    }
private:
    int maskString(string str){
        int strMask = 0;
        for(auto & ch : str){
            int relPos = (ch - 'a');
            strMask |= (1<<relPos);
        }
        return strMask;
    }

};