class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int j = 0 ;
        int mini = INT_MAX;
        string ch ;
        for(int i = 0 ; i < strs.size();i++){
            int k = strs[i].length();
            mini = min(k,mini);
        }
       while(j<mini){
         char c =strs[0][j];
         int freq = 0 ;
          int i = 0 ;
        while(i<strs.size()){
        if( strs[i][j]== c){
             
              freq++;
        }
         i++;
        }
        if(freq==strs.size()){
            ch +=c ;
             j++;
        }
        else break ;
       
       }
       return ch ;
    }
};