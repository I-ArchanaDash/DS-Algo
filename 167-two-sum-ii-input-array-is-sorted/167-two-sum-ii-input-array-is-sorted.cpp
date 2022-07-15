class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result(2,0);
        int start=0;
        int end=numbers.size()-1;
        while(start<end){
            if(numbers[start]+numbers[end]<target)
                start++;
            else if(numbers[start]+numbers[end]>target)
                end--;
            else 
            {
                result[0]=start+1;
                result[1]=end+1;
                break;
            }
        }   
        return result;
        
    }
};