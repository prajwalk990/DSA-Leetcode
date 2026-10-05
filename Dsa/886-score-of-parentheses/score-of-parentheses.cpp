class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;

        for (char c : s) {

            if (c == '(') {
                st.push(-1);
            }
            else {
                int v = 0;

                while (st.top() != -1) {
                    v += st.top();
                    st.pop();
                }

                st.pop(); // remove '('

                if (v == 0)
                    st.push(1);       // ()
                else
                    st.push(2 * v);   // (A)
            }
        }

        int ans = 0;

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};