class Solution {
public:
    int countKeyChanges(string s) {
        int ans=0;
        for(int i=1;i<s.length();i++)
        {
               char c1=tolower(s[i-1]);
               char c2=tolower(s[i]);
               if(c1!=c2)
               ans++;
        }
        return ans;
        
    }
};
