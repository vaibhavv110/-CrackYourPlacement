class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.length();
        int m = haystack.length();
        if (n > m)
            return -1;
        if (n == 0)
            return 0;
        bool match;
        for (int firstIndex = 0; firstIndex <= m-n; firstIndex++) {
            match = true;
            for (int currIndex = 0; currIndex < n; currIndex++) {
                if (haystack[firstIndex + currIndex] != needle[currIndex]) {
                    match = false;
                    break;
                }
            }
            if (match == true)
                return firstIndex;
        }
        return -1;
    }
};
