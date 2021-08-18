class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        int len1 = num1.length() - 1;
        int len2 = num2.length() - 1;
        string result = "";
        while(len1 >= 0 || len2 >= 0) {
            int a = len1 < 0 ? 0 : num1[len1] - '0';
            int b = len2 < 0 ? 0 : num2[len2] - '0';
            int sum = a + b + carry;
            carry = sum/10;
            int num = sum % 10;
            result.push_back(num + '0');
            len1--;
            len2--;
        }
        if(carry == 1)
            result.push_back('1');

        reverse(result.begin(), result.end());
        return result;
    }
};
//Time Complexity : O(num1 + num2)
//Space Complexity: O(max(num1,num2))
