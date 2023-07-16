class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string one=strs[0];
        string two=strs[n-1];
        for(int i=0;i<one.size();i++)
        {
            if(one[i]==two[i])
            res+=one[i];
            else break;

        }
        return res;

    }
};
