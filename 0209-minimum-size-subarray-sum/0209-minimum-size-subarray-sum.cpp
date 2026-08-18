class Solution {
public:
int left = 0;
int mini = INT_MAX;
int sum =0;
    int minSubArrayLen(int target, vector<int>& nums) {
       
        for(int right = 0; right<nums.size();right++){
            sum = sum + nums[right];
            while (sum >= target ){
                mini = min(mini, right-left+1);                
                sum-=nums[left];            
                left++;
            }
            // mini =min(ans, mini);


        }
         if(mini == INT_MAX){
            return 0;
        }
        return mini;
        
    }
};