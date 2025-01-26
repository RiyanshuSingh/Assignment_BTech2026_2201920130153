class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
               int st=max(0,i-nums[i]);
               for( int j=st;j<=i;j++)
               {
                //   cout<<nums
                    ans+=nums[j];
               }
        }
        return ans;
    }
};
