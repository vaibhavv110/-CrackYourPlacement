class Solution {
public:
    int minMoves(vector<int>& nums) {
     int mn=INT_MAX;
     for(int i=0;i<nums.size();i++)
     {
         mn=min(mn,nums[i]);
         
     }
     int sum=0;
     for(int i=0;i<nums.size();i++)
     {
         nums[i]-=mn;
         sum+=nums[i];
     }
     return sum;
    }
};
