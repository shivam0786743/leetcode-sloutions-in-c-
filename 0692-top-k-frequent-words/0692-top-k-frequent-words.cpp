class Solution {
public:
struct cmp {
        bool operator()(pair<string,int>& a, pair<string,int>& b) {
              if(a.second == b.second)
            return a.first < b.first;
            return a.second > b.second; 
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;

        for(int i =0;i<words.size();i++){
            mp[words[i]]++;
        }
         priority_queue<pair<string,int>, vector<pair<string,int>>, cmp> pq;

         for(auto i :mp){
            string words  = i.first;
            int freq = i.second;

            pq.push({words, freq});

            if (pq.size()>k){
                pq.pop();
            }

         }
         vector<string> ans;
         while(!pq.empty()){
            ans.push_back(pq.top().first);
            pq.pop();
         }
reverse(ans.begin(), ans.end());

        return ans;

        
    }
};