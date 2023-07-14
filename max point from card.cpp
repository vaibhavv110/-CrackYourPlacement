long long maxScore(vector<int> &arr, int N, int k) {
        long long ans = 0;
        
        for(int i=0;i<k;i++)
            ans += arr[i];
        
        long long curr = ans;
        int j = N-1;
        for(int i=k-1;i>=0;i--){
            curr = curr-arr[i]+arr[j--];
            ans = max(ans,curr);
        }
        
        return ans;
    }
