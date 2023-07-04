class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ans=0;
        int mn=INT_MAX;
        int mx=INT_MIN;
        vector<int>pre(n);
        vector<int>post(n);
        for(int i=0;i<n;i++)
        {
            mn=min(mn,prices[i]);
            pre[i]=mn;
        }
        for(int i=n-1;i>=0;i--)
        {
            mx=max(mx,prices[i]);
            post[i]=mx;
        }
        for(int i=0;i<n-1;i++)
        {
            ans=max(ans,post[i+1]-pre[i]);
        }
        return ans;
        
    }
};
