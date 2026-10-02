class Solution {
public:
    vector<string> ans ;
    vector<string> generateParenthesis(int n) {
    ans.clear();
    string cur = "";
    generate(0,0,cur,n);
    return ans ;
    }
    void generate(int open ,int close , string&cur , int n  ){
         if(open >n || close > n ) return ;
         if(cur.size()==2*n && open==close){
            ans.push_back(cur);
            return ;
         }
         if(open<n){
            cur.push_back('(');
            generate(open+1,close,cur,n);
            cur.pop_back();
         }
         if(close < open){
            cur.push_back(')');
            generate(open,close+1,cur,n);
            cur.pop_back();
         }
    }
};