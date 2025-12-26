class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m=INT_MIN, c=0;
        for(int x:nums)
        {
            c+=x;
            m=max(m,c);
            if(c<0) c=0;
        }
        return m;
    }
};

