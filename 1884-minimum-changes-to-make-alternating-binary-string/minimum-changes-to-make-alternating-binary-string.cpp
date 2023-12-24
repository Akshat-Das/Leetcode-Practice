class Solution {
public:
    int minOperations(string s) {
        int count1 = 0,count2 = 0;
        string a = "0", b = "1";
        for(int i=1;i<s.size();i++){
            if(i%2 == 0){
                a+= "0";
                b+= "1";
            }
            else{
                a+="1";
                b+="0";
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i] != a[i]) count1++;
            if(s[i] != b[i]) count2++;
        }
        return min(count1,count2);
    }
};