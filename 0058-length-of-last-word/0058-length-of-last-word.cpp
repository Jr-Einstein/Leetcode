class Solution {
public:
    int lengthOfLastWord(string s) {
        string word="";
        if(s.length()==0){
            return 0;
        }
        if(s.length()==1){
            if(s[0]!=' '){
                return 1;
            }
            else{
                return 0;
            }
        }
        if(s[0]!=' '){
            word+=s[0];
        }
        for(int i=1;i<s.length();i++){
            if(s[i]!=' '&&s[i-1]==' '){
                word=s[i];
            }
            else if(s[i]!=' '&&s[i-1]!=' '){
                word+=s[i];
            }
        }
        return word.length();
    }
};