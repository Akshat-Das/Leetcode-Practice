class Solution {
public:
    int minPartitions(string n) {
        char maxnum = '0';
        for(auto number : n){
            maxnum = max(maxnum,number);
        }
        int ans = maxnum - '0';
        return ans;
    }
};