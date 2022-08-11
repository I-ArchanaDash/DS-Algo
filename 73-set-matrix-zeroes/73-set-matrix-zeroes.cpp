class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int arr_row[row]; fill(arr_row,arr_row+row,-1);
        int arr_col[col]; fill(arr_col,arr_col+col,-1);
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==0)
                {
                    arr_row[i]=0;
                    arr_col[j]=0;
                }
            }
        }
        for(int i=0;i<row;i++)
        {
            if(arr_row[i]==0)
            {
                for(int j=0;j<col;j++)
                {
                    matrix[i][j]=0;
                }
            }
        }
        for(int j=0;j<col;j++)
        {
            if(arr_col[j]==0)
            {
                for(int i=0;i<row;i++)
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
};