class Solution {
public:
    int mirrorReflection(int p, int q) {
        while(p%2 == 0 && q%2 == 0){
            p /= 2;
            q /= 2;
        }
        int ans = 0;
        if(p%2 == 0){
            ans = 2;
        }else{
            if(q%2 == 1){
                ans = 1;
            }
        }
        return ans;
    }
};