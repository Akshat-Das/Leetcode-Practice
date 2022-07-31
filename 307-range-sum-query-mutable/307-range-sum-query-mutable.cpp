class NumArray {
public:
    vector<int> num;
    int sum;
    NumArray(vector<int>& nums) {
        num = nums;
        sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
        }
    }
    
    void update(int index, int val) {
        sum -= num[index];
        sum += val;
        num[index] = val;
    }
    
    int sumRange(int left, int right) {
        int ans=sum;
        for(int i =0;i<left;i++){
            ans-= num[i];
        }
        for(int i=right+1;i<num.size();i++){
            ans-= num[i];
        }
        return ans;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */