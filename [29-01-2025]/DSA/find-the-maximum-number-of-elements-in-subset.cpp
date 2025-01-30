class Solution {
public:
    int maximumLength(vector<int>& nums) {
        map<int,int>m;
        // sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
               m[nums[i]]++;

        }
        // b
        // cout<<(m.find(1)!=m.end());
        int ans=0;
        for(auto &a1:m)
        {
            // cout<<a1.first<<" ";
              if(a1.first==1)
              {
                  int cal=(a1.second-1)/2+1;
                  cout<<cal;
                 ans=max(ans,2*(cal-1)+1);
                 continue;
              }
               int x1=a1.first;
               int cnt=0;
               int i=1;
               int x=x1;
               while(true)
               {
                    if(m[x]>1)
                    {
                        cnt+=2;
                        i=i*2;
                    }else if(m[x]==1)
                    {
                          cnt+=1;
                          break;
                    }
                    else
                    {
                        cnt--;
                        break;
                    }
                     if(pow(x1,i)>INT_MAX){
                     cnt--;
                     break;
                     }
                    x=pow(x1,i);
               }
               ans=max(ans,cnt);
        }
        return ans;

    }
};
