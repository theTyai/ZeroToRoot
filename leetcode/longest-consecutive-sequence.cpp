class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        for(auto x:s)
        {
            if(s.find(x-1)==s.end())
        }
        int m=0;
        return m;
            {
                int c=1, d=c;
            }
    }
                while(s.find(x+1)!=s.end()){c++;x++;}
                m=max(m,c);
};

