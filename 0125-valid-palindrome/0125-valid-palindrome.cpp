class Solution {
public:
    bool isPalindrome(string s) {
        for(int i = 0; i < s.length(); i++){
           s[i] = tolower(s[i]);
         }

        for(int i = 0; i < s.length();){
            if(!isalnum(s[i])){
                s.erase(i, 1);
            }
            else{
                i++;
            }
        }
        string original = s;
        reverse(s.begin(), s.end());

        if(s==original){
            return true;
        }
        else{
            return false;
        }
    }
};