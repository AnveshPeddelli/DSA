class Solution {
public:
    int minAddToMakeValid(string s) {
        if(!s.empty())
        {
            int q = 0;
            int ex = 0;
            for(int i = 0; i< s.size(); i++)
            {
                if(s[i] == '(')
                    q++;
                else 
                {
                    if(q>0) q--;
                    else ex++;
                }
            }
            return q+ex;
        }
        return 0;
    }
};