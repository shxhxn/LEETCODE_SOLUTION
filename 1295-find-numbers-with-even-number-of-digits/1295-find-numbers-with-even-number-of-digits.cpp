class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even_count = 0;
        int digits = 0;
        
        for(int i = 0; i < nums.size(); i++){
            digits = to_string(nums[i]).size();

            if(digits % 2 == 0){
                even_count++;
            }
        }
        return even_count;
    }
};