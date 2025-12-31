        if (!word.empty()) st.push(word);

        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
            if (!st.empty()) ans += ' ';
        }

        return ans;
    }
};


