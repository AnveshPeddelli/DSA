class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string _s;
        for(auto ch: s)
        {
            if(ch == '(')
            {
                if(count>0)
                {
                    _s += ch;
                }
                count++;
            }
            else
            {
                count--;
                if(count>0)
                    _s += ch;
            }
        }
        
        return _s;
    }
};