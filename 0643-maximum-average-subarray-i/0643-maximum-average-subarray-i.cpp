class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double sum =0;
        double ans= INT_MIN;
        int left = 0;
        for(int right =0; right<nums.size(); right++){
        sum = sum+nums[right];
        if(right-left+1 > k){
            sum = sum-nums[left];
            left++;

        }
        if( right-left + 1 == k){

             ans = max(ans, sum/k);
        }
       


        }
        return ans;
    }
};