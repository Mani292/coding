class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers or multiples of 10 (but not 0) are not palindrome
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        long reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // For odd digit numbers, ignore the middle digit by reversedHalf/10
        return (x == reversedHalf || x == reversedHalf / 10);
    }
};
