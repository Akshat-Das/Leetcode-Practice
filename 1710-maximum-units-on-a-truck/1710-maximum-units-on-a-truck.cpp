class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        int ans=0;
        for(auto box: boxTypes){
            int x=min(box[0],truckSize);  
            ans+=(x*box[1]);  
            truckSize-=x;
            if(truckSize <= 0) break; 
        }
        return ans;
    }
    static bool cmp(vector<int>&a,vector<int>&b){
        return a[1] > b[1];
    }
};