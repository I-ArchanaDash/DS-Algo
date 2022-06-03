class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=(int)nums.size();
        int l=0;
        int m=0;
        int h=n-1;
        while(h>=m)
        {
            if(nums[m]==0)
            {
                swap(nums[m],nums[l]);
                l++;m++;
            }
            else if(nums[m]==1)
            {
                m++;
            }
            else if(nums[m]==2)
            {
                swap(nums[m],nums[h]);
                h--;
            }
        }
        
    }
};