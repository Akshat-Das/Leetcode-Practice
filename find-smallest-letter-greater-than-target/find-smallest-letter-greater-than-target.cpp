class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans = 'Q';
        for(int i=0;i<letters.size();i++){
            if(letters[i] > target){
                ans = letters[i];
                break;
            }
        }
        if(ans == 'Q'){
            return letters[0];
        }else{
            return ans;
        }
    }
};