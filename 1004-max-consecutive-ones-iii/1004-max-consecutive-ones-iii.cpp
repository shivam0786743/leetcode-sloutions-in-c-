class Solution {
public:
int zcount = 0;
int maxi = 0;
int left = 0;

    int longestOnes(vector<int>& nums, int k) {
        for(int right =0; right<nums.size();right++){
            if(nums[right] == 0){
               zcount++;
            }
            while(zcount > k){
               if(nums[left] == 0){
                zcount--;
               }
                left++;

            }
           
            maxi =  max(maxi,right-left+1);
        }
        
        return maxi;
    }
};