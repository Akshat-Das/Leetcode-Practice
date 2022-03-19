class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> start(n),end(n),ans;
        start[0] = 1;
        end[0] = 1;
        for(int i=1;i<n;i++){
            start[i] = start[i-1]*nums[i-1];
            end[i] = end[i-1]*nums[n-i];
        }
        for(int i=0;i<n;i++){
            ans.push_back(start[i]*end[n-1-i]);
        }
        return ans;    
    }
};