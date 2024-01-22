class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) {
            return false;  // Negative numbers and zero are not powers of three
        }

        while (n % 3 == 0) {
            n /= 3;
        }

        return n == 1;  // If n is a power of three, it should become 1 after dividing by 3
    }
};
