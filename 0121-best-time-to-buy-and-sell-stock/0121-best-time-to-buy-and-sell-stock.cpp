class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minP=INT_MAX;
        int maxPr=0;
        for(int price:prices){
            minP= min(minP,price);
            maxPr= max(maxPr,price-minP);
        }
        return maxPr;
    }
};