// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        int max_count(int count[],int N)
        {
            int max_one=count[0];
            int max_idx=0;
            for(int i=1;i<N;i++)
            {
                if(count[i]>max_one){
                    max_one=count[i];
                    max_idx=i;
                }
            }
            return max_idx;
        }
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            // your code here
            int count[N];
            for(int i=0;i<N;i++)
            {
                count[i]=0;
                for(int j=0;j<M;j++)
                {
                    if(Mat[i][j]==1)
                        count[i]++;
                }
            }
            int max = max_count(count,N);
            return max;
        }
};

// { Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}  // } Driver Code Ends