/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low = 1;
        int high = n;

        while(low <= high){
          int mid = low + (high - low) / 2;

          if(0 == guess(mid)){
            return mid;
          }
          else if(1 > guess(mid)){
            high = mid - 1;
          }
          else if(-1 < guess(mid)){
            low = mid + 1;
          }
        }
        return -1;
    }
};