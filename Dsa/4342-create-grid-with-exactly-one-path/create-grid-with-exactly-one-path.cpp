class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> v ;
        for(int i = 0 ; i < m ; i++){
            string val (n,'#');
            v.push_back(val);
        }
       // return v ;
        for(int j = 0 ; j < n-1 ; j++){

             v[0][j]='.';
        }
         for(int a = 0 ; a < m ; a++){
           // string s = v[a];
             v[a][n-1]='.';
        }
        return v ;
    }
};