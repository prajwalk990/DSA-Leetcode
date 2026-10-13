class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans = 0 ;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i]<0){
                nums[i]=-nums[i];
            }
        }
        sort(nums.begin(),nums.end());
        int n = (nums.size()/2) ;
        if(nums.size()%2==0) n--;
        int i ;
        for(i = 0 ; i <= n ; i++){
            int val = nums[nums.size()-1-i];
            ans+= val*val;
        }
        for(int j = i ; j < nums.size(); j++){
            int val = nums[nums.size()-1 - j];
            ans -= val*val;
        }
        return ans ;
    }
};