class Solution {
public:
    void recurs(string op,int open,int close,vector<string>& ans){
        if(open == 0 && close == 0){
            ans.push_back(op);
            return;
        }
        if(open == close){
           op.push_back('('); 
           recurs(op,open-1,close,ans);
        }
        else if(open == 0){
           op.push_back(')'); 
           recurs(op,open,close-1,ans);
        }else if(close == 0){
           op.push_back('('); 
           recurs(op,open-1,close,ans);
        }else{
           string op1 = op;
           string op2 = op;
           op1.push_back('('); 
           recurs(op1,open-1,close,ans);
           op2.push_back(')'); 
           recurs(op2,open,close-1,ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        recurs("",n,n,ans);
        return ans;
    }
};