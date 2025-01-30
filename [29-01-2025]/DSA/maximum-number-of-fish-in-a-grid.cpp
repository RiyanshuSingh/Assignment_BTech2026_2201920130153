class Solution {
public:
    int bfs(vector<vector<int>>& grid, vector<vector<int>>&vis,int x,int y)
    {
                  queue<pair<int,int>>q;
                  q.push({x,y});
                  vis[x][y]=1;
                  int ans=grid[x][y];
                  while(!q.empty())
                  {
                           int x1=q.front().first;
                           int y1=q.front().second;
                        //    cout<<x1<<" "<<y1<<endl;
                           q.pop();
                           //left
                           if(y1>0&&grid[x1][y1-1]>0&&vis[x1][y1-1]==0)
                           {
                                 vis[x1][y1-1]=1;
                                 q.push({x1,y1-1});
                                 ans+=grid[x1][y1-1];
                           }

                            //right
                              if(y1<grid[0].size()-1&&grid[x1][y1+1]>0&&vis[x1][y1+1]==0)
                           {
                                 vis[x1][y1+1]=1;
                                 q.push({x1,y1+1});
                                 ans+=grid[x1][y1+1];
                           }
                           //up
                             if(x1>0&&grid[x1-1][y1]>0&&vis[x1-1][y1]==0)
                           {
                                 vis[x1-1][y1]=1;
                                 q.push({x1-1,y1});
                                 ans+=grid[x1-1][y1];
                           }
                           //down 
                             if(x1<grid.size()-1&&grid[x1+1][y1]>0&&vis[x1+1][y1]==0)
                           {
                                 vis[x1+1][y1]=1;
                                 q.push({x1+1,y1});
                                 ans+=grid[x1+1][y1];
                           }
                  }
                  return ans;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
        // queue<int>q;
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
               for(int j=0;j<grid[0].size();j++)
               {
                     if(grid[i][j]>0&&vis[i][j]==0)
                      ans=max(ans,bfs(grid,vis,i,j));
               }
        }
        return ans;

    }
};
