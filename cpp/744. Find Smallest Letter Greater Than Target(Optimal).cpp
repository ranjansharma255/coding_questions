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


//Java Implementation
class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
       int start = 0;
        int end = letters.length - 1;

        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(target < letters[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return letters[start % letters.length];
        //if the start is the end of the array or if no character is available in the array which is greater than the target
        // then just return the 0th index character.
        // when the while loop condition is voilated then then start = end + 1 which is the length of the
        // array so we used that statement in the return.
        //we can also use
        // if(start == letters.length) return 0thindex;
    }
}
