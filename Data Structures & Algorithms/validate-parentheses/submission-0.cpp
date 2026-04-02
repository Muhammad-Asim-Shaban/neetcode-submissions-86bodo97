class Solution {
public:
    bool isValid(string s) {
       stack<char> st;
       int n=(int)s.length(); 
       for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
            }
            else if(s[i]=='{')
            {
                st.push(s[i]);
            }
            else if(s[i]=='[')
            {
                st.push(s[i]);
            }
            else if(s[i]==')')
            {
                if(st.empty())
                {
                    return false;
                }
                if(st.top()!='(')
                {
                    return false;
                }
                st.pop();
            }
            else if(s[i]==']')
            {
                if(st.empty())
                {
                    return false;
                }
                if(st.top()!='[')
                {
                    return false;
                }
                st.pop();
            }
            else if(s[i]=='}')
            {
                if(st.empty())
                {
                    return false;
                }
                if(st.top()!='{')
                {
                    return false;
                }
                st.pop();
            }
        }
        if(st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
