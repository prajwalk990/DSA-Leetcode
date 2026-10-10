class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s ;
        vector<string> vec(numRows);
        string ans = "";
        bool bol = true ;
        int j = -1 ;
        for(int i = 0 ; i < s.size(); i++){
            if(j<numRows && bol){
                 j++;
                vec[j].push_back(s[i]);
                if(j==numRows-1) bol=false ;
            }
            else{
               j--;
               vec[j].push_back(s[i]);
               if(j==0) bol = true ;
            }

        }
        for(int i = 0 ; i < vec.size(); i++){
            ans +=vec[i];
        }
        return ans ;
    }
};