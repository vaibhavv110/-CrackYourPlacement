//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
      if(n==2) return {nums[1],nums[0]};
           vector<long long int>ans; 
           long long int mul=1,mulzero=1,count=0;
           for(int i=0;i<n;i++){
               if(nums[i]==0) count++;
               mul*=nums[i];
               if(nums[i]==0){
                  mulzero*=1;
               }else {
                   mulzero*=nums[i];
               }
           }
           if(count>1){
               for(int i=0;i<n;i++){
                   ans.push_back(0);
               }
           }else{
               
           for(int i=0;i<n;i++){
               if(nums[i]==0){
                  ans.push_back(mulzero);
               }
               else{
               long long int  put=mul/nums[i];
               ans.push_back(put);
           }}
           }
           return ans;
    }
};
