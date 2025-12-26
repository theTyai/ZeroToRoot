    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m_price = INT_MAX, m = 0;
        for (int p : prices) {
            if(p<m_price) m_price=p;
            else m=max(m,p-m_price);
        }
        return m;

