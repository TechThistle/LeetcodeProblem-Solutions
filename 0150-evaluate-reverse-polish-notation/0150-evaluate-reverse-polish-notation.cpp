class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto val: tokens)
        {
            if(val=="+" || val=="-" || val=="*" || val=="/")
            {
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                if(val=="+")
                {
                    st.push(a+b);
                }
                else if(val=="-")
                {
                    st.push(a-b);
                }
                else if(val=="*")
                {
                    st.push(a*b);
                }
                else
                {
                    st.push(a/b);
                }
            }
            else
            {
                st.push(stoi(val));
            }
        }
        return st.top();
    }
};