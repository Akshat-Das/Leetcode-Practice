class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        map<int,int> mp;
        for(auto num:nums){
            mp[num]++;
        }
        int ans = 0,arr[nums.size()], j= 0,count = 1;
        for(auto i:mp){
            arr[j] = i.first;
            j++;
        }
        for(int i=0;i<j-1;i++){
            if(abs(arr[i+1] - arr[i]) == 1) count++;
            else count = 1;
            ans = max(ans,count);
        }
        if(ans == 0) return 1;
        return ans;
    }
};