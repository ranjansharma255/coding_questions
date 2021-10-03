// java implementation
class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int start = 0;
        int end = arr.length -1;
        while(start < end) {
            int mid = start + (end - start) / 2;
            if(arr[mid] > arr[mid + 1]){
                //you are in the decreasing part of the array
                //so this may be the answer, but look at left
                //this is why end != mid - 1
                end = mid;
            } else {
                //you are in the ascending part of the array
                start = mid + 1;
                //because we know that mid + 1 element > mid element so we are ignoring the mid element
            }
        }
        //in the end, start == end and pointing to the largest number
        //because of the two checks above
        //start and end are always trying to find the max element in the above 2 checks
        //hence, they are pointing to just one element, that is the max one because that is what the checks say.
        // more elaboration: at every point of time for start and end, they have the best possible answer till that time
        // and if we are saying that only one item is remaining, hence cuz of above line that is the best possible ans

        return start; // or we can also return end
    }
}