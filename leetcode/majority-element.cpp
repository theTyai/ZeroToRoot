class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0,el;
        for(int i=0; i<nums.size(); i++)
        {
            if(c==0){el=nums[i];c++;}
            else if(el==nums[i]) c++;
            else c--;
        }
        int p=0;
        for(int x:nums) if(x==el) p++;
        if(p>nums.size()/2) return el;
        return -1;
    }
};

