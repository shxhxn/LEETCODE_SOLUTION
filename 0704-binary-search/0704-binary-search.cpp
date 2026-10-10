class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        
        while(low <= high){
            int mid = (low+high)/2;
            if(target == nums[mid]){
                return mid;
                break;
            }
            else if(target > nums[mid]){
                low = mid + 1;
            }
            else if(target < nums[mid]){
                high = mid - 1;
            }
        }
        return -1;
    }
};
// this is BINARY SEARCH.
// we are given an array, suppose : [1,4,6,9,10,12,15].
// what happens in binary search? we first find the middle element. here it is 9.
// we find it using high and low.
// int high = nums.size() - 1. int low = 0. initial value.
// the mid is assigned inside the loop because mid is dynamic, it changes.
// so mid here is basically the index found using low+high / 2.
// we first check, if the mid index's value (nums[mid] == target)  is equal to target we return it.
// if target os on the right side, then, we set low as mid + 1 (as the elements before the initial mid gets elemenated.), and high was what it was.
// then vice versa for target in left.
// we use return -1 in the end, so as to return the original array if not found.
