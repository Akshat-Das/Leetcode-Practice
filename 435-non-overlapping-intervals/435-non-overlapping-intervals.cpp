class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int count = 0;
        sort(intervals.begin(),intervals.end());
        ans.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(ans.back()[1] > intervals[i][0]){
                count +=1;
                if(ans.back()[1] > intervals[i][1])
                    ans.back()[1] = intervals[i][1];
                else
                    ;
            }else{
                ans.push_back(intervals[i]);
            }
        }
        return count;
    }
};