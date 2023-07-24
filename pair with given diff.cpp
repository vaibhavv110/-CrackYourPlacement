

bool findPair(int arr[], int size, int n){
    unordered_set<int>s;
    for(int i=0;i<size;i++)
    {
        if(s.find(arr[i]+n)!=s.end())
        return true;
        s.insert(arr[i]);
    }
    s.clear();
    for(int j=size-1;j>=0;j--)
    {
         if(s.find(arr[j]+n)!=s.end())
        {
            return true;
        }
        s.insert(arr[j]);
    }
    return false;
    
}
