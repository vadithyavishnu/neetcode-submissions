class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mine=prices[0];
        int maxprofit=0;

        for(int i=1;i<prices.size();i++){
            mine=min(prices[i],mine);
            maxprofit=max(maxprofit,prices[i]-mine);
        }
        return maxprofit;
        
    }
};
