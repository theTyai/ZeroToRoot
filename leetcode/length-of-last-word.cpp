class Solution {
public:
    int lengthOfLastWord(string s) {
        string d = "";
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ' ' && d.empty()) continue;
            else if (s[i] == ' ' && !d.empty()) return d.length();
        return d.length();
};
            else d = s[i] + d;
        }
    }


