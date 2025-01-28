class Solution {
public:
  int bfs(unordered_map<int,vector<int>>&adj,int st,  int end,int n)
  {
          vector<bool>vis(n,false);
          vis[st-1]=true;
          queue<int>q;
          int h=1;
         int  ha=0;
         q.push(st);
          while(!q.empty())
          {
                int n=q.size();
                for( int i=0;i<n;i++)
                {
                       for( int j=0;j<adj[q.front()].size();j++)
                       {
                               if(adj[q.front()][j]==end)
                               {
                                  return h;
                               }
                               if(vis[adj[q.front()][j]-1]==false)
                               {
                               vis[adj[q.front()][j]-1]=true;
                                q.push(adj[q.front()][j]);
                               }
                               
                       }
                       q.pop();
                }
                
                h++;
          }
        //   cout<<"u";
          return h;
  }
    vector<int> countOfPairs(int n, int x, int y) {
        unordered_map<int,vector<int>>adj;
        for(int i=1;i<n;i++)
        {
              adj[i].push_back(i+1);
              adj[i+1].push_back(i);
        }
        adj[x].push_back(y);
        adj[y].push_back(x);
        vector<int>ans(n,0);

        for(int i=1;i<n;i++)
        {
              for( int j=i+1;j<=n;j++){
               int hi=bfs(adj,i,j,n);

            //    cout<<hi<<" "<<i<<" "<<j<<endl;
              ans[hi-1]+=2;
              }
        }
        return ans;

    }
};
