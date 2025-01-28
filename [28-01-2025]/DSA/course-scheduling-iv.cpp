class Solution {
public:
  bool bfs(unordered_map<int,vector<int>>&adj,int j,int end,int numCourses)
  {
      vector<bool>vis(numCourses,false);
               queue<int>q;
               q.push(j);
               vis[j]=true;
               while(!q.empty())
               {
                      int n=q.size();
                      for( int i=0;i<n;i++)
                      {
                                for(int k=0;k<adj[q.front()].size();k++)
                                {
                                       if(adj[q.front()][k]==end)
                                       return true;
                                       if(!vis[adj[q.front()][k]]){
                                       vis[adj[q.front()][k]]=true;
                                       q.push(adj[q.front()][k]);
                                       }
                                }
                                q.pop();
                      }
               }
               return false;
  }
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
            unordered_map<int,vector<int>>adj;
            vector<bool>ans;
            for(int i=0;i<prerequisites.size();i++)
            {
                      adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
            }
            // cout<<bfs(adj,1,0,numCourses);
            for(int i=0;i<queries.size();i++)
            {
                   int st=queries[i][0];
                   int end=queries[i][1];
                   int ha=0;
                //    cout<<st<<" "<<end<<endl;
                //    for( int j=0;j<numCourses;j++)
                //    {
                    
                //        if(j==st||j==end)
                //        continue;
                //               if(pre[j]&&bfs(adj,j,end,numCourses))
                //               {
                //                 cout<<i<<" "<<st<<endl;
                //                  ha=1;
                //                     ans.push_back(false);
                //                     break;
                //               }
                           

                //    }
                   if(bfs(adj,st,end,numCourses))
                   {
                          
                        //   cout<<i<<" ";
                                    ans.push_back(true);
                   }
                   else
                   {
                         ans.push_back(false);
                   }

            }
            return ans;
    }
};
