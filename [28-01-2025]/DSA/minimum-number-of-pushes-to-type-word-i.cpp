class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int ans=0;
        if(n<=8)
        return n;
        int i=2;
        ans=8;
        while(n>0)
        {
              n=n-8;
              if(n>0)
              ans+=(min(8,n)*i);
              i++;

        }
        return ans;
    }
};
