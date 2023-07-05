class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        m[0]=1;//since the inittial sum is 0 so we will make frequency of 0=1.
        int sum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int mod=sum%k;
            if(mod<0)
            mod+=k;
            if(m.find(mod)!=m.end()){
            ans+=m[mod];
            m[mod]++;
        }
        else
        m[mod]++;


        }
        return ans;
    }
};
