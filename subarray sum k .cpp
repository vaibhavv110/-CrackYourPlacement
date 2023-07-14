class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0, currSum = 0;
        int n = nums.size();
        if(n==0) return 0;
        unordered_map<int, int> m;
        for(int i=0;i<n;i++){
            currSum += nums[i];
            
            if(currSum == k) count++;
            if(m[currSum-k]!=0) count += m[currSum-k];
            m[currSum]++;
        }
        return count;
    }
};
