public class OrderAgnosticBinarySearch {
    public static void main(String[] args) {
//        int[] arr = {-18, -12, -4, 0, 2, 3, 4, 5, 15, 16, 20, 60, 100};
        int[] arr = {99, 80, 75, 22, 11, 10, 5, 2, -3};
        int target = 80;

        int ans = orderAgnosticBS(arr, target);
        System.out.println(ans);
    }

    static int orderAgnosticBS(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;

        //find whether the array is sorted in ascending or descending
        boolean isAsc = arr[start] < arr[end];

        //we can add the below expression as above
        /*if(arr[start] < arr[end]) {
            isAsc = true;
        } else {
            isAsc = false;
        }*/

        while(start <= end) {
            int mid = start + (end - start) / 2;

            //common condition taking out
            if(target == arr[mid]) {
                return mid;
            }

            if(isAsc) {
                if (target < arr[mid]) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            } else {
                if(target < arr[mid])  {
                    start = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }

}
