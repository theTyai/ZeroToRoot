class Solution {
public:
    string largestGoodInteger(string num) {
        string a = "";

        for (int i = 0; i + 2 < num.length(); i++) {
            if (num[i] == num[i+1] && num[i+1] == num[i+2]) {
                string cur = num.substr(i, 3);
            }
                if (cur > a) a = cur;
        }
        return a;
    }
};


