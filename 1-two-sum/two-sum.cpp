class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> mp1;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(mp1.find(target-nums[i]) != mp1.end()){
                ans.push_back(i);
                auto it = mp1.find(target-nums[i]);
                ans.push_back(it->second);
                break;
            }else{
                mp1[nums[i]] = i;
            }
        }
        return ans;
    }
};