class Solution {
public:
    static bool sortrow(const vector<int>& v1, const vector<int>& v2){
    return v1[0] < v2[0];
    }
 
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), sortrow);
        int ans = 0;
        for(int i=0;i<points.size() - 1;i++){
            ans = max(ans, points[i+1][0] - points[i][0]);
        }
        return ans;
    }
};