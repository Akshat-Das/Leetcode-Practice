class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left=0,right=n-1,bottom=n-1,top=0;
        int direction=1;
        vector<vector<int>> v(n,vector<int>(n));
        int count = 1;
        while(left<=right && top<=bottom)
        {
            if(direction==1)
            {
                for(int i=left;i<=right;i++)
                    v[top][i] = count++;
                direction=2;
                top++;
            }
            
            else if(direction==2)
            {
                for(int i=top;i<=bottom;i++) v[i][right] = count++;
                direction=3;
                right--;
            }
            
            else if(direction==3)
            {
                for(int i=right;i>=left;i--) v[bottom][i] = count++;
                direction=4;
                bottom--;
            }
            
            else if(direction==4)
            {
                for(int i=bottom;i>=top;i--) v[i][left] = count++;
                direction=1;
                left++;
            }
        }
        return v;
        
    }
};