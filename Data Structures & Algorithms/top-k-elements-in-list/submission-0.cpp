class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>pr;
        for( auto x: mp){
            pr.push_back({x.second, x.first});
        }
        sort(pr.rbegin(), pr.rend());
        for(int i=0;i<k;i++){
            ans.push_back(pr[i].second);
        }
        return ans;
    }
};
