class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int red=0,white=0,blue=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                red++;
            }
            else if(nums[i]==1)
            {
                white++;
            }
            else
            {
                blue++;
            }
        }
        nums.clear();
        for(int i=0;i<red;i++)
        {
            nums.push_back(0);
        }
        for(int i=0;i<white;i++)
        {
            nums.push_back(1);
        }
        for(int i=0;i<blue;i++)
        {
            nums.push_back(2);
        }
        
    }
};
