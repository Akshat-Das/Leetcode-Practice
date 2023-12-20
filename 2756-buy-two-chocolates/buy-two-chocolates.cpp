class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int min1 = INT_MAX,min2 = INT_MAX;
        min1 = min(prices[0],prices[1]);
        if(min1 == prices[0]) min2 = prices[1];
        else min2 = prices[0];
        for(int i=2;i<prices.size();i++){
            int num = prices[i];
            if(num < min1){
                min2 = min1;
                min1 = num;
            }else if(num < min2){
                min2 = num;
            }
        }
        if(money >= min1+min2) return money-min1-min2;
        else return money;
    }
};