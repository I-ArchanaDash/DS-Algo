class Solution {
public:
    bool isPalindrome(int x) {
        long long int temp=x;
        unsigned int sum=0;
        if(x<0)return false;
        while(temp!=0)
        {
             sum=temp%10 + sum*10;
             temp/=10;
         }
         return sum==x;
    }
};