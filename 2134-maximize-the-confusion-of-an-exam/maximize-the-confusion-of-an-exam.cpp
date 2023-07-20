class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int i=0,j=0,ans = 0,count = 0;
        while(j < answerKey.size()){
            if(answerKey[j] == 'F'){
                count++;
            }
            if(count > k){
                while(count > k){
                    if(answerKey[i] == 'F') count--;
                    i++;
                    if(i == j) break;
                }
            }
            if(count <= k){
                ans = max(ans,j-i+1);
                j++;
            }
        }
        i=0,j=0,count = 0;
        int ans2 = 0;
        while(j < answerKey.size()){
            if(answerKey[j] == 'T') count++;
            if(count > k){
                while(count > k){
                    if(answerKey[i] == 'T') count--;
                    i++;
                }
            }
            if(count <= k){
                ans2 = max(ans2,j-i+1);
                j++;
            }
        }
        return max(ans,ans2);
    }
};