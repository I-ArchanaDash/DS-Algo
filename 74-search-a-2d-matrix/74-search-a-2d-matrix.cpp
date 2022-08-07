class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty())
           return false;
        int m=matrix.size();
        int n=matrix[0].size();
        int start=0;
        int end=m*n-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int e = matrix[mid/n][mid%n];
            if(target==e)
                return true;
            else if(target<e)
                end=mid-1;
            else
                start=mid+1;
        }
        return false;
    }
};