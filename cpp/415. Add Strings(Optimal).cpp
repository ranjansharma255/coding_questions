https://leetcode.com/problems/add-strings/

// Approach 1
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
// Approach 2
class Solution {
public:
    string addStrings(string num1, string num2) {
        //size of the string 1 greater than string 2 then swap
        if(num1.length() > num2.length())
            swap(num1,num2);
        string str = "";

        int n1 = num1.length(), n2 = num2.length();
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        int carry = 0;

        for(int i = 0; i < n1; i++) {
            int sum = (num1[i] - '0') + (num2[i] - '0' + carry);
            str.push_back(sum%10 + '0');
            //calculating the carry for next iteration
            carry = sum / 10;
        }
        //adding the remaining digits of larger number
        for(int i = n1; i < n2; i++) {
            int sum = (num2[i]-'0') + carry;
            str.push_back(sum % 10 + '0');
            carry = sum / 10;
        }
        // adding the remaining carry to the result
        if(carry)
            str.push_back(carry + '0');
        // reversing the resulting string
        reverse(str.begin(), str.end());

        return str;
    }
};


//Time Complexity : O(num1 + num2)
//Space Complexity: O(max(num1,num2))
