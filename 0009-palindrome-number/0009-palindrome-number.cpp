class Solution {
public:
    bool isPalindrome(int x) {
    long long temp = x,sum = 0,d;
    while (x > 0) {
        d = x % 10;
        sum = (sum * 10) + d;
        x /= 10;
    }
    if (temp == sum) return true;
     else return false;   
    }
};