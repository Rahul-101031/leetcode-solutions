// class Solution {
// public:
//     bool isPalindrome(int x) {
//         string rev = to_string(x);
//         reverse(rev.begin(), rev.end());
//         return to_string(x) == rev;
//     }
// };

// 2nd method;;;;
// class Solution {
// public:
//     bool isPalindrome(int x) {
//         string s = to_string(x);
//         int i = 0, j = s.size()-1;
//         while (i <= j) if (s[i++] != s[j--]) return false;
//         return true;
//     }
// };

// 3rd solution

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        int rev = 0;
        while (rev < x) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        
        return x == rev || x == rev / 10;
    }
};