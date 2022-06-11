// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


 // } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int len1=m-l+1;
         int len2=r-m;
         
         int *leftarr = new int[len1];
         int *rgtarr = new int[len2];
         
         int mainArrIndex=l;
         
         for(int i=0;i<len1;i++)
         {
             leftarr[i]=arr[mainArrIndex++];
         }
         
         mainArrIndex=m+1;
         
         for(int i=0;i<len2;i++)
         {
             rgtarr[i]=arr[mainArrIndex++];
         }
         
         //merge 2 sorted arrays
         
         int p1=0,p2=0;
         mainArrIndex=l;
         while(p1<len1 && p2<len2)
         {
             if(leftarr[p1]<rgtarr[p2])
                arr[mainArrIndex++]=leftarr[p1++];
            else
                arr[mainArrIndex++]=rgtarr[p2++];
         }
         while(p1<len1)
         {
             arr[mainArrIndex++]=leftarr[p1++];
         }
         while(p2<len2)
         {
              arr[mainArrIndex++]=rgtarr[p2++];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        //base case
        
        if(l>=r)
            return;
        int mid=l+(r-l)/2;
        //sort left part
        mergeSort(arr,l,mid);
        
        //sort right part
        mergeSort(arr,mid+1,r);
        
        merge(arr,l,mid,r);
        
    }
};

// { Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends