class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int res = 0;
        int segSum = 0;
        int segMax = -1;
        int segLen = 0;
        for(int i = 0; i < n; ++i) {
            segSum += neededTime[i];
            segLen++;
            segMax = max(segMax, neededTime[i]);
             if(i == n-1 || colors[i] != colors[i+1]) {
                if(segLen > 1) {
                    res += segSum - segMax;
                }
                segSum = 0;
                segMax = -1;
                segLen = 0;
            }   
        }
        return res;
    }
};