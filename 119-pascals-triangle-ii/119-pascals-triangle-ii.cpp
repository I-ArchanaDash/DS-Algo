class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        for(int row=0;row<=rowIndex;row++)
        {
            vector<int> v(row+1,1);
            for(int col=1;col<row;col++)
            {
                v[col]=ans[row-1][col]+ans[row-1][col-1];
            }
            ans.push_back(v);
        }
        return ans[rowIndex];
    }
};