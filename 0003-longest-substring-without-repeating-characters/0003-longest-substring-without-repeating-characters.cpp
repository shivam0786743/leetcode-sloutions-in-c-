class Solution {
public:
int left = 0;
int longest = 0;
int ans= 0;
unordered_map<int,int> mp;
    int lengthOfLongestSubstring(string s) {

        for(int right =0; right<s.length(); right++){
        mp[s[right]] ++;
        while(mp[s[right]]>1){
            mp[s[left]]--;
            left++;
        }
        longest = right-left+1;
       ans  = max(ans, longest);

        }
        return ans;

        
    }
};