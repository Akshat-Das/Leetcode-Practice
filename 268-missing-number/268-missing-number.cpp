class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a = nums.size();
        int sum = a*(a+1)/2;
        int miss = 0;
        for(int i=0;i<a;i++){
            miss+= nums[i];
        }
        miss = sum - miss;
        return miss;
    }
};