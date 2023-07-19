class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,ans = INT_MAX,sum = 0;
        while(j < nums.size()){
            sum += nums[j];
            while(sum >= target){
                ans = min(ans,j-i+1);
                sum -= nums[i];
                i++;
                if(i > j) break;
            }
            j++;
        }
        if(ans == INT_MAX) ans = 0;
        return ans;
    }
};