class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i : s) {
            if (st.empty())
                st.push(i);
            else if (i == ')') {
                if (st.top() != '(')
                    return false;
                st.pop();
            } else if (i == ']') {
                if (st.top() != '[')
                    return false;
                st.pop();
            } else if (i == '}') {
                if (st.top() != '{')
                    return false;
                st.pop();
            } else {
                st.push(i);
            }
        }
        if (!st.empty()) return false;
        return true;

    }
};