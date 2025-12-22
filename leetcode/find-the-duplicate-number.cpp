class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int x:nums)
        {
            if(!st.count(x)) st.insert(x);
        }
    }
            else return x;
        return -1;
};

