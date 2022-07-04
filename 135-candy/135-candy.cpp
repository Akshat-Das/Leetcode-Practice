class Solution {
public:
    int candy(vector<int>& ratings) {
        if(ratings.size()==1)
            return ratings.size();
        vector<int> num(ratings.size(),1);
        for (int i=1;i<ratings.size();i++)
        {
            if(ratings[i]>ratings[i-1])
                num[i]=num[i-1]+1;
        }
        for (int i=ratings.size()-1;i>0;i--)
        {
            if(ratings[i-1]>ratings[i])
                num[i-1]=max(num[i]+1,num[i-1]);
        }
        int ans=0;
        for (int i=0;i<ratings.size();i++)
        {
            ans+=num[i];
        }
        return ans;
    }
};