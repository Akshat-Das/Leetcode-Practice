class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        int n = buildings.size();
        vector<pair<int,int>>v;
        for(auto it : buildings){
            v.push_back({it[0],-it[2]});
            v.push_back({it[1],it[2]});
        }
        sort(v.begin(),v.end());
        vector<vector<int>>ans;
        multiset<int>q;
        int top = 0;
        q.insert(0);
        for(auto it:v){
            if(it.second<0){
                q.insert(-it.second);
            }     
            else{
                q.erase(q.find(it.second));
            }
            int height = *q.rbegin();
            if(top != height){
                vector<int>temp;
                temp.push_back(it.first);
                temp.push_back(height);
                top = height;
                ans.push_back(temp);
            }
        }
        return ans;
    }
};