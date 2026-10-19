class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int highest = 0;
        int lowest = prices[0];  

        for(int i = 1; i < prices.size(); i++){  
            int a = prices[i] - lowest;         

            if(a > highest){
                highest = a;
            }

            if(prices[i] < lowest){             
                lowest = prices[i];
            }
        }

        return highest;
    }
};