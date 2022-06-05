class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        int mid=l+(h-l)/2;
        while(l<=h)
        {
            if(target==nums[mid])
            {
                return mid;
            }
            else if(nums[l]<=nums[mid])
            {
                if(target>=nums[l] && target<nums[mid])
                {
                    h=mid-1;
                }
                else
                    l=mid+1;
            }
            else
            {
                if(target>nums[mid] && target<=nums[h])
                    l=mid+1;
                else
                    h=mid-1;
            }
            mid=l+(h-l)/2;
        }
        return -1;
    }
};