//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    
  //Your code here
  string revStr=str;
  int n=revStr.size();
  int i=0;
  while(i<n)
  {
  swap(revStr[i],revStr[n-1]);
  i++;
  n--;
  }
  return revStr;
}

