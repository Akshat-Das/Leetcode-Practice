class Solution {
public:
    struct Cord{
        int x,y,lvl;
        Cord(int a,int b,int l):x(a),y(b),lvl(l){}
    };
    
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int vis[105][105];
        memset(vis,0,sizeof vis);
        queue<Cord>qe;
        qe.emplace(entrance[0],entrance[1],0);
        int n = maze.size(),m = maze[0].size();
        vis[entrance[0]][entrance[1]]=1;
        int fx[4]={0,0,1,-1};
        int fy[4]={1,-1,0,0};
        while(!qe.empty()){
            auto top = qe.front();
            qe.pop();
            if(top.x == 0 ||top.x==n-1||top.y==0||top.y==m-1){
                if(top.lvl!=0){
                    return top.lvl;
                }
            }
            for(int i=0;i<4;i++){
                int x = top.x + fx[i];
                int y = top.y + fy[i];
                if(x>=0 && x<n && y>=0 && y<m&&vis[x][y]==0&&maze[x][y]=='.'){
                    qe.emplace(x,y,top.lvl+1);
                    vis[x][y]=1;
                }
            }
        }
        return -1;
    }
};