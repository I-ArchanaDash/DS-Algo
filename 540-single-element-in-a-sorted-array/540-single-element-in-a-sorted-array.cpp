class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans=0;
        for(int x:nums)
        {
            ans=ans^x;
        }
        return ans;
    }
};