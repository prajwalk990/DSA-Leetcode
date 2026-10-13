class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans = 0 ;
        vector<int> p ;
        for(int i : nums){
            if(i>=0){ 
                p.push_back(i);
            }
            else {
               p.push_back(-i);
            }
        }
        sort(p.begin(),p.end());
        int n = (nums.size()/2) ;
        if(nums.size()%2==0) n--;
        int i ;
        for(i = 0 ; i <= n ; i++){
            int val = p[p.size()-1-i];
            ans+= val*val;
        }
        for(int j = i ; j < nums.size(); j++){
            int val = p[p.size()-1 - j];
            ans -= val*val;
        }
        return ans ;
    }
};