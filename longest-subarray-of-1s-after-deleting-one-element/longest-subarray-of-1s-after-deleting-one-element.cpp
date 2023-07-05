class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,j=0,ans=0,count=0,total=0;
        while(j<nums.size()){
            if(nums[j] == 0){
                count++;
                while(count>1){
                    if(nums[i] == 0) count --;
                    else total--;
                    i++;
                }
            }else{
                total++;
                ans = max(ans,total);
            }
            j++;
        }
        if(ans == nums.size()) ans--;
        return ans;
    }
};