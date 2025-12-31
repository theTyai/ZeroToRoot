        }

        // handle last word
        int idx = t.back() - '1';
        d[idx] = t.substr(0, t.length() - 1);

        // build answer
        string ans = "";
        for (int i = 0; i < n; i++) {
            ans += d[i];
            if (i < n - 1) ans += " ";
        }
        return ans;
    }
};


