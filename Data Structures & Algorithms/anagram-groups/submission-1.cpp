class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mps;
        for(int i=0;i<strs.size();i++){
            string temp= strs[i];
            sort(temp.begin(), temp.end());

            mps[temp].push_back(strs[i]);
        }
        vector<vector<string>>vs;
        for( auto x: mps){
            vs.push_back(x.second);
        }
        return vs;

    }
};
