class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        for(char c : s){
            if(c==')'){
                string cur = "";
                while(st.top()!='('){
                    cur.push_back(st.top());
                    st.pop();
                }
                st.pop();
                for(char cu : cur){
                    st.push(cu);
                }
            }
            else {
                st.push(c);
            }
        }
        string ans = "";
        while(!st.empty()){
            ans = st.top()+ans ;
            st.pop();
        }
        return  ans ;
    }
};