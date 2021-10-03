https://leetcode.com/problems/find-smallest-letter-greater-than-target/

//cpp Implementation
//Time Complexity : O(logN)
//Space Complexity: O(1)

//We have used here binary search approach and the speciality of it is that when the target element is not found
// then the while condition will be voilated at start = end + 1
// then the start points to the next smaller element which is greater than equal to the target.
//From this problem we can also solve the ceiling of a number in the array.
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start = 0;
        int end = letters.size();
        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(target > letters[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        if(start == letters.size())
            return letters[0];
        else
            return letters[start];
        //can also use this below statement
        // return letters[start % letters.size()];
    }
};
