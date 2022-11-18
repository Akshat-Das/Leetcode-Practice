class Solution {
public:
    bool isUgly(int n) {
        bool ans;
        if(n<=0)
            ans = false;
        else{
            int arr[3] = {2,3,5};
            for(int i=0;i<3;i++){
                if(n%arr[i]==0){
                    while(n%arr[i]==0){
                        n=n/arr[i];
                    }
                }
            }
            if(n==1)
                ans= true;
            else
                ans= false;
        }
        return ans;
    }
};