class Solution {
public:
    int bitwiseComplement(int num) {
        if(num == 0) return 1;
        
        int MSB = log2(num) + 1;
        return ((1 << MSB) - 1) ^ num;
    }
};