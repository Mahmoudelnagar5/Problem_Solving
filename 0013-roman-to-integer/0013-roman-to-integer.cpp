class Solution {
public:
    int romanToInt(string s) {
         map<char,int> ans = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
            int sum = 0;
            for(int i = 0;i  < s.size();i++){
                if(ans[s[i]] < ans[s[i + 1]])
                  sum -= ans[s[i]];
                else
                  sum += ans[s[i]];
            }
            return sum;
    }
};