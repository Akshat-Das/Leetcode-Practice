class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> w,l;
        for(int i=0;i<matches.size();i++){
            w[matches[i][0]]++;
            l[matches[i][1]]++;
        }
        vector<vector<int>> ans(2);
        for(auto i:w){
            if(!(l.count(i.first)))
                ans[0].push_back(i.first);
        }
        for(auto i:l){
            if(i.second == 1)
                ans[1].push_back(i.first);
        }    
        return ans;
    }
};