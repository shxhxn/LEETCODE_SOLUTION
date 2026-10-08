class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int richest = 0;
        for(int i = 0; i < accounts.size(); i++){
            int current_value = 0;
            for(int j = 0; j < accounts[i].size(); j++){
                current_value += accounts[i][j];
            }
            if(current_value > richest){
                richest = current_value;
            }
        }
        return richest;
    }
};