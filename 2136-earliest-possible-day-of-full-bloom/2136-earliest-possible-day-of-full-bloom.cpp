class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int,int>> vp;
        int last = 0, grow = -1;
        for(int i=0;i<plantTime.size();i++){
            vp.push_back({plantTime[i],growTime[i]+1});
        }
        sort(vp.begin(),vp.end(),[&](auto a,auto b){return a.second > b.second;});
        for(int i=0;i<plantTime.size();i++){
            last = max(last, grow + vp[i].first + vp[i].second);
            grow += vp[i].first;
        }
        return last;
    }
};