class Solution {
public:
    string removeOuterParentheses(string s) {
        int open = 0 ;
        int clos = 0 ;
        string ans = "";
        string cur = "";
        for(int i = 0 ; i < s.size(); i++){
            char c = s[i];
            cur.push_back(c);
            if(c==')') clos++;
            else open++;
            if(open==clos && open!=0){
                 cur.pop_back();
                 cur.erase(cur.begin());
               ans+= cur; ;
              cur.clear();
            }
        }
        return ans ;
    }
};