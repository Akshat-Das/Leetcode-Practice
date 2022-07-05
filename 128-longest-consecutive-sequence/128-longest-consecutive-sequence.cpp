class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> check;
        for(auto num : nums){
            check.insert(num);
        }
        int ans = 0;
        for(auto num: nums){
            if(check.find(num-1) == check.end()){
                int y = num + 1;
                while(check.find(y) != check.end()){
                    y++;
                }
                ans = max(ans,y-num);
            }
        }
        return ans;
    }
};