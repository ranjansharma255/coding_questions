//Time Complexity : O(logn)
// Space Complexity: O(1)
/**
 * // This is MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * interface MountainArray {
 *     public int get(int index) {}
 *     public int length() {}
 * }
 */

class Solution {
    public int findInMountainArray(int target, MountainArray mountainArr) {
        //finding the peak element
        int start = 0;
        int end = mountainArr.length() - 1;
        while(start < end) {
            int mid = start + (end - start) / 2;
            if(mountainArr.get(mid) > mountainArr.get(mid + 1)){
                end = mid;
            } else {
                start = mid + 1;
            }
        }
        int peak = start;
        int firstTry = orderAgnosticBinarySearch(mountainArr, target, 0, peak);
        if(firstTry != -1)
            return firstTry;


        return orderAgnosticBinarySearch(mountainArr, target, peak + 1, mountainArr.length() - 1 );
    }


    int orderAgnosticBinarySearch(MountainArray mountainArr, int target, int start, int end) {
       boolean isAsc = mountainArr.get(start) < mountainArr.get(end);
        while(start <= end) {
            int  mid = start + ( end - start) / 2;
            if(mountainArr.get(mid) == target)
                return mid;
            if(isAsc){
                if(target > mountainArr.get(mid))
                    start = mid + 1;
                else
                    end = mid - 1;
            } else {
                if(target > mountainArr.get(mid))
                    end = mid - 1;
                else
                    start = mid + 1;
            }
        }
        return -1;
    }
}

// another approach

class Solution {
    public int findInMountainArray(int target, MountainArray mountainArr) {


        int start=0;
        int end=mountainArr.length()-1;

        while(start<end){
            int mid=start+(end-start)/2;

            if(mountainArr.get(mid)>mountainArr.get(mid+1))
                end=mid;
            else if(mountainArr.get(mid)<mountainArr.get(mid+1))
                start=mid+1;
        }

        //now applying binary search over the ascending part of the array

        int peak=end;

        start=0;
        end=peak;
        int ans=-1;

        while(start<=end){
            int mid=start+(end-start)/2;

            if(mountainArr.get(mid)==target){
                ans=mid;
                break;
            }
            else if(mountainArr.get(mid)>target)
                end=mid-1;
            else
                start=mid+1;
        }

        //now a binary search for finding the target in the descending part of the array
        start=peak;
        end=mountainArr.length()-1;

        while(start<=end){
            int mid=start+(end-start)/2;

            if(mountainArr.get(mid)==target){
                ans=(ans>=0)?Math.min(ans,mountainArr.get(mid)):mid;
            break;
        }
        else if(mountainArr.get(mid)>target)
            start=mid+1;
        else
            end=mid-1;
    }

        return ans;

    }
}
