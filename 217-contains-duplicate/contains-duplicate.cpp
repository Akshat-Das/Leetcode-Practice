class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool ans = false;
        unordered_map <int,int> mp;
        for(auto i:nums){
            mp[i]++;
            if(mp[i] == 2){
                ans = true;
                break;
            }
        }
        return ans;
    }
};