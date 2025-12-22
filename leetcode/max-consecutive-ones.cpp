class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0, m=-1;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==1) c++;
            else {m=max(c,m); c=0;}
        }
        return max(m,c);
    }
};

