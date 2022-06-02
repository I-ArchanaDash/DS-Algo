class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size(); //row
        int n=matrix[0].size();//col
        vector<vector<int>> res(n, vector<int>(m, 0)); //creation of new matrix
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                res[i][j]=matrix[j][i];
            }
        }
        return res;
    }
};
