class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map <int,int> ans;
        vector<int> final1(2);
        for(int num = 0;num < numbers.size();num++){
            if(ans.find(target - numbers[num]) != ans.end()){
                final1[1] = num+1;
                final1[0] = ans[target - numbers[num]]+1;
                break;
            }else{
                ans[numbers[num]] = num;
            }
        }
        return final1;
    }
};