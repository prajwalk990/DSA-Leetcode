class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size()-1;
        int j = b.size()-1;
        int c = 0 ;
        string ans = "";
        while(i>=0|| j>=0 || c!=0){
           int num1 = (i>=0)? a[i]-'0': 0 ;
           int num2 = (j>=0)? b[j]-'0': 0 ;
           int sum = num1 + num2 + c;
                ans.push_back(sum%2+'0');
                if(sum>1) c = 1 ;
                else c = 0 ;
                i--;
                j--;
        }
         reverse(ans.begin(),ans.end());
        return ans ;
    }
};