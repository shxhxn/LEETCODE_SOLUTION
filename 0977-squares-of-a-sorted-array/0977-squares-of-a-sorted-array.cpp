class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int a = nums[0];
        for(int i = 0; i < nums.size(); i++){
             nums[i] = nums[i] * nums[i];
        }
        for(int j = 0; j < nums.size(); j++){
            for(int k = 0; k < nums.size()-1; k++){
               if(nums[k] > nums[k+1]){
                 int temp = nums[k];
                 nums[k] = nums[k+1];
                 nums[k+1] = temp;
               }
            }
        }
        return nums;
    }
};