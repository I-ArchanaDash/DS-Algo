class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_so_far=prices[0];
        int ans=0;
        for(int i=1;i<prices.size();i++)
        {
            int current_profit=prices[i]-min_so_far;
            if(current_profit>ans)
                ans=current_profit;
            if(prices[i]<min_so_far)
                min_so_far=prices[i];
        }
        return ans;
    }
};