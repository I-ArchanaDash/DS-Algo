class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i;
        for(i=0;i<nums.size()-1;)
        {
            if(nums[i]!=nums[i+1])
                return nums[i];
            i+=2;
        }
        return nums[i];
    }
};