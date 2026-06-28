// 9. palindrome number
class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending with zero (but not 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int reversedHalf = 0;

        // Reverse half of the number
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // For odd digits, reversedHalf/10 removes the middle digit
        return x == reversedHalf || x == reversedHalf / 10;
    }
};
