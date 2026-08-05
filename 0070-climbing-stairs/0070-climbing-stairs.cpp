class Solution {
public:
unordered_map<int, int> dp;

    int fun(int i, int n) {
        if (i == n){
            return 1;
        }
            if(i > n){
                return 0;
            }
        

        if(dp.find(i) != dp.end()){
            return dp[i];

        }
        int a = fun(i+1,n);
        int b = fun(i+2,n);

        int ans = a+ b;
        dp[i] = ans;
        return ans;
        
        
    }
    int climbStairs(int n){
    int ans = fun( 0, n);
    return ans;
    }

};