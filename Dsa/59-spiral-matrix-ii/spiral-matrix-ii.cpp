class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int row_s = 0 , row_end = n ;
        int col_s = 0 , col_end = n ;
        vector<vector<int>> ans(n,vector<int>(n,0));
        int c = 1 ;
        while(c!=n*n+1){
             for(int i = col_s ; i < col_end ; i++){
                 ans[row_s][i]=c;
                 c++;
             }
             row_s++;
             for(int i = row_s ; i < row_end ; i++){
                ans[i][col_end-1]=c;
                c++;
             }
             col_end--;
             for(int j = col_end-1 ; j>=col_s ; j--){
                ans[row_end-1][j]=c;
                c++;
             }
             row_end--;
             for(int j = row_end-1 ; j >=row_s ; j--){
                 ans[j][col_s]=c;
                 c++;
             }
             col_s++;
        }
        return ans ;
    }
};