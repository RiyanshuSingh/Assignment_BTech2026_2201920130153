class Solution {
public:
 void bfs(unordered_map<int,vector<int>>&adj, vector<bool>&vis)
 {
         queue<int>q;
         q.push(0);
         vis[0]=true;
         while(!q.empty())
         {
              int n=q.size();
              for(int i=0;i<n;i++)
              {
                     for(int j=0;j<adj[q.front()].size();j++)
                     {
                              if(vis[adj[q.front()][j]]==false)
                              {
                                vis[adj[q.front()][j]]=true;
                                q.push(adj[q.front()][j]);
                              }
                     }
                     q.pop();
              }
         }
 }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int>ans(2,0);
        int n=edges.size();
        for(int i=n-1;i>=0;i--)
        {
              
               int x=edges[i][0];
                  int y=edges[i][1];
                  int ha=1;
                   unordered_map<int,vector<int>>adj;
             for(int j=0;j<n;j++)
             {
                 
                    if(x==edges[j][0]&&y==edges[j][1])
                    continue;
                    // cout<<edges[j][0]<<" "<<edges[j][1]<<endl;
                     adj[edges[j][0]-1].push_back(edges[j][1]-1);
                      adj[edges[j][1]-1].push_back(edges[j][0]-1);
             }
             vector<bool>vis(n,false);
             bfs(adj,vis);
             for(int j=0;j<n;j++)
             {
                  if(vis[j]==false){
                   ha=0;
                //    cout
                // cout<<j<<" ";
                  break;
                  }
             }
             if(ha==1)
             {
                 return {edges[i][0],edges[i][1]};
             }

        }
        return {0,1};
    }
};
