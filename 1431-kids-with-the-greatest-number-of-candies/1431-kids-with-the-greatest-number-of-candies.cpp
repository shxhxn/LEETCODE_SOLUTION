class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> arr(candies.size(), false);
            int greatest = candies[0];
                    for(int j = 0; j < candies.size(); j++){
                if(candies[j] > greatest){
                    greatest = candies[j];
                }
            }

        for(int i = 0; i < candies.size(); i++){
            

            candies[i] = candies[i] + extraCandies;
            if(candies[i] >= greatest){
               arr[i] = true;
            }
            else{
                arr[i] = false;
            }
        }
        return arr;
    }
};