class Solution {
public:
int count  = 0;
int maxi =0;

    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        for(int i =0; i<nums.size(); i++){
            if(nums[i] == 1){
            count++;
            maxi= max(maxi, count);

        } else{
            count = 0;
        }
    }
        return maxi;

    }
};