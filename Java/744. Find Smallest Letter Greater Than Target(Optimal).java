https://leetcode.com/problems/find-smallest-letter-greater-than-target/

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