class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<int> check;
        long sum = 0;
        int a;
        bool ans = true;
        for(auto num : target){
            check.push(num);
            sum += num;
        }
        while (true) {
            a = check.top(); 
            check.pop();
            sum -= a;
            if (a == 1 || sum == 1)
                return true;
            if (a < sum || sum == 0 || a % sum == 0)
                return false;
            a %= sum;
            sum += a;
            check.push(a);
        }
    }
};