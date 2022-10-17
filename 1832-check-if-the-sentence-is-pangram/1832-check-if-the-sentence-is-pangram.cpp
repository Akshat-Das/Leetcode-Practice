class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26] = {0};
        for(auto word : sentence){
            arr[word - 'a']++;
        }
        bool ans = true;
        for(int i=0;i<26;i++){
            if(arr[i] == 0){
                ans = false;
                break;
            }
        }
        return ans;
    }
};