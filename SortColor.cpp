class Solution {
public:
    void sortColors(vector<int>& nums) {
        
     int low=0;
        int high=nums.size()-1;
        int index=0;

        while(index<=high){
            if(nums[index] == 0) {
                nums[index++] = nums[low];
                nums[low++] = 0;
            }
            else if(nums[index] == 2) {
                nums[index] = nums[high];
                nums[high--] = 2;
            }
            else index++;
        }
    }
};
