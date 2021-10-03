https://leetcode.com/problems/find-in-mountain-array/

//Inefficient Approach because uses much memory.
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for(int i : nums) {
            stringstream s;
            s << i;
            string str;
            // or string str = s.str();
            // str() returns a string object with a copy of the current contents of the stream
            s >> str;
            if(str.length() % 2 == 0) {
                cnt++;
            }
        }
        return cnt;
    }
};

// A bit Efficient Approach
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for(int i : nums) {
            if(even(i)){
                cnt++;
            }
        }
        return cnt;
    }
    bool even(int num) {
        int numberOfDigits = digits(num);
        if(numberOfDigits % 2 == 0){
            return true;
        }
        else
            return false;
    }
    int digits(int num) {
        if(num < 0) {
            num = num * -1;
        }

        return (int)log10(num) + 1;
    }
};

//another Approach
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for(int i : nums) {
            string s = to_string(i);
            if(s.length() % 2 == 0) {
                cnt++;
            }
        }
        return cnt;
    }
};

//another Approach
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int a : nums){
            string temp = to_string(a);
            count += (temp.size() % 2 == 0);
        }
        return count;
    }
};
