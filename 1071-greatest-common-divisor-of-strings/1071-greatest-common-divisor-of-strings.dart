class Solution {
  String gcdOfStrings(String str1, String str2) {
    if(str1 + str2 != str2 + str1) return "";
    int a = str1.length;
  int b = str2.length;

  // gcd(a,b) = gcd(b,a%b); stop b = 0
  while (b != 0) {
    int temp = a;
    a = b;
    b = temp % b;
  }
  int ans = a;

  String result = str2.substring(0, ans);   
  return result;                                            
  }
}