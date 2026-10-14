class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        int val = INT_MIN ;
        int sumi = sum ;
        string ansi = "";

         int cur = 0 ;
         string ans ="";
         for(int i = 0 ; i < num ; i++){
             for(int j = 9 ; j >= 0 ; j--){
                if(ans.size()!=0 && j>ans[ans.size()-1]-'0') continue ;
                if(sumi>=j){
                    ans.push_back(j+'0');
                    cur += j*j ;
                    sumi -=j;
                    break ;
                }
             }
         }
         if(sumi!=0) return "";
         if(val<=cur){
            ansi = ans ;
         }
         return ansi ;
    }
};