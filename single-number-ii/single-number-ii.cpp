  class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<32;i++){
            int sum = 0;
            for(int j=0;j<nums.size();j++){
                if((nums[j] >> i) & 1){
                    sum += 1;
                    sum %= 3;
                }
            }
            if(sum != 0){
                ans = ans | (sum << i); 
            }
        }
        return ans;
    }
};