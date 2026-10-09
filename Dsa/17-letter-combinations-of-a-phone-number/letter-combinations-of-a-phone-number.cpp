class Solution {
public:
    vector<string> ans ;
    vector<string> letterCombinations(string digits) {
         map<char,string> m ;
         m['2']="abc";
         m['3']="def";
         m['4']="ghi";
         m['5']="jkl";
         m['6']="mno";
         m['7']="pqrs";
         m['8']="tuv";
         m['9']="wxyz";
      string cur = "";
        letter(digits,0,cur,m);
        return ans ;
    }
    void letter(string & digits , int i , string & cur,map<char,string>&m){
          if(i==digits.size()){
            ans.push_back(cur);
            return ;
          }
          for(char c : m[digits[i]]){
             cur.push_back(c);
             letter(digits,i+1,cur,m);
             cur.pop_back();
          }

    }
};