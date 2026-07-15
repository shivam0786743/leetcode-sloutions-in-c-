class Solution {
public:

    struct cmp {
        bool operator()(pair<int,int>& a, pair<int,int>& b) {
            return a.second > b.second; 
        }
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;

        // Count frequency
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq;


        // Put elements in heap
        for(auto i : mp) {
            int element = i.first;
            int freq = i.second;

            pq.push({element, freq});

            // keep only k elements
            if(pq.size() > k) {
                pq.pop();
            }
        }


        vector<int> ans;

        while(!pq.empty()) {
            ans.push_back(pq.top().first);
            pq.pop();
        }

        return ans;
    }
};