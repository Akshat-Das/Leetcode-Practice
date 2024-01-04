class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        unordered_map <int,int> mp;
        for(auto num:nums) mp[num]++;
        for(auto it : mp){
            if(it.second == 1) return -1;
            else{
                ans += it.second/3;
                if(it.second%3)ans++;
            }
        }
        return ans;
    }
};