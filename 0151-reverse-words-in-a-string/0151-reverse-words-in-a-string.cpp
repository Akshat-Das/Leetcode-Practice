class Solution {
public:
    string reverseWords(string s) {
        vector<string> temp;
        for(int i=0;i<s.length();i++){
            string x="";
            if(s[i]!=' '){   
                x+=s[i++];
                while((i<s.length())&&(s[i]!=' ')){
                    x+=s[i];
                    i++;
                }
                temp.push_back(x);    
            }
        }
        string ans="";
        for(int i=temp.size()-1;i>=0;i--){
            ans+=temp[i];
            if(i!=0)
                ans+=" ";
        }
        return ans;
    }
};