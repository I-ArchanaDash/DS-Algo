class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> values{
         {'I',1},
         {'V',5},
         {'X',10},
         {'L',50},
         {'C',100},
         {'D',500},
         {'M',1000}
        };
        int ans=values[s.back()];
        for(int i=s.length()-2;i>=0;i--)
        {
            if(values[s[i]]<values[s[i+1]])
                ans-=values[s[i]];
            else
                ans+=values[s[i]];
            
        }
        return ans;
    }
};