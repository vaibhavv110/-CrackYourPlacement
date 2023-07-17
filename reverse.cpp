class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        string temp = "";

        for (int i = 0; i < s.size(); ++i) {
            while (i < s.size() && s[i] != ' ') {
                temp += s[i];
                ++i;
            }

            if (temp != "") {
                // If we find a word, will add it at beginning of result.
                if (res != "") {
                    res = temp + " " + res;
                } else {
                    res = temp;
                }
                temp = "";
            }
        }
        return res;
    }
};
