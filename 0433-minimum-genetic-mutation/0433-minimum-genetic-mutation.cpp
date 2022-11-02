class Solution {
public:
    bool possible=false;
    bool valid(string &A,string &B){
        if(A.size()!=B.size()){
            return false;
        }
        int cnt=0;
        for(int i=0;i<A.size();i++){
            if(A[i]!=B[i]){
                cnt++;
            }
        }
        if(cnt==1){
            return true;
        }
        return false;
    }
    int solve(string start,string end,vector<string> &bank,unordered_set<string> &V){
        if(start==end){
            possible=true;
            return 0;
        }
        int steps=12;
        for(int i=0;i<bank.size();i++){
            if(V.find(bank[i])==V.end() && valid(bank[i],start)){
                V.insert(bank[i]);
                steps=min(steps,1+solve(bank[i],end,bank,V));
                V.erase(V.find(bank[i]));
            }
        }
        return steps;
    }
    int minMutation(string start, string end, vector<string>& bank) {
        unordered_set<string> V;
        V.insert(start);
        int val=solve(start,end,bank,V);
        if(possible){
            return val;
        }
        return -1;
    }
};