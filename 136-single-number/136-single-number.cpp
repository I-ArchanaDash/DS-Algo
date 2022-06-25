class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //using bitwise XOR
        //a^a=0 
        //a^0=a
        //a^b=b^a
        
        int ans=0;
        for(int num:nums)
        {
            ans=ans^num;
        }
        return ans;
    }
};