class Solution {
public:
    int maxArea(vector<int>& height) {
            int vol=INT_MIN;
            int n=height.size();
            int v=0;
            int j=n-1;
            int i=0;
            int ans=INT_MIN;
            while(j>i)
            {
                    v=min(height[i],height[j]);
                    vol=v*(j-i);
                    ans=max(vol,ans);
                    if(height[j]>height[i])
                            i++;
                    else
                            j--;
                    
            }
        return ans;
    }
};
