class Solution {
      public int findPeakElement(int[] nums) {
        int n = nums.length;
        int i = 0;
        int j = n - 1;
        while (i <= j) {           
            int mid = i + (j - i) / 2;       
            long left = mid - 1 < 0 ? Long.MIN_VALUE : nums[mid - 1];
            long right = mid + 1 >= n ? Long.MIN_VALUE : nums[mid + 1];
            if (nums[mid] > left && nums[mid] > right) {
                return mid;
            }
            else if (nums[mid] > left && nums[mid] < right) {
                i = mid + 1;
            }
            else {
                j = mid - 1;
            }
        }
        return -1;
    }
}
