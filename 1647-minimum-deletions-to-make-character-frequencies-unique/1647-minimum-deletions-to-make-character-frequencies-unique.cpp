class Solution {
public:
    int minDeletions(string s) {
        int freq[26] = {0};
        for(auto c: s){
            freq[c - 'a']++;
        }
        int count = 0;
        sort(freq, freq + 26, greater<int>());
        unordered_set <int> check;
        for(int i=0;i<26;i++){
            if(freq[i] == 0){;}
            else{
                if(check.find(freq[i]) == check.end()){
                    check.insert(freq[i]);
                }else{
                    while(check.find(freq[i]) != check.end()){
                        count++;
                        freq[i]--;
                    }
                    if(freq[i] > 0) check.insert(freq[i]);
                }
            }
        }
        return count;
    }
};