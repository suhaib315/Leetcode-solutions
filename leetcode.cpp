//Given a string containing just the characters '(' and ')', return the length of the longest valid (well-formed) parentheses substring;
//Leetcode Hard
//THIS IS THE MOST UNIQUE SOLUTION I DESIGNED FOR THIS PROBLEM TOOK ME AROUND 6HOURS I HAD UPLOADED ITS VEDIO SOLUTION ON LINKDIN ALSO;

class Solution {
public:
    int longestValidParentheses(string s) {
        vector<int> v;
        int x=0;
        while(x<s.size())
        {
            if(s[x]=='(')
                v.push_back(x);
            else if(!v.empty() && s[x]==')')
            {
                s[x]='1';
                s[v.back()]='1';
                v.pop_back();
            }
            x++;
        }
        int ans=0,c=0;
        for(char x:s)
        {
            if(x=='1')
            {
                c++;
                ans=max(ans,c);
            }
            else
              c=0;
        }
        return ans;
        
    }
};

