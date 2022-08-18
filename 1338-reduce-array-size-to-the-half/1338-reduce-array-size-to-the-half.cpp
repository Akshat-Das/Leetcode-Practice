class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>count;
        for(auto num : arr){
            count[num]++;
        }
        vector<int> freq;
        for (auto [_,con] : count){
            freq.push_back(con);
        }
        sort(freq.begin(), freq.end());
        int ans = 0, removed = 0, i = freq.size() - 1;
        while (removed < arr.size()/2) {
            ans += 1;
            removed += freq[i--];
        }
        return ans;
    }
};