class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mps;
        unordered_map<char,int>mpt;
        if(s.length() != t.length()) return false;
        for(int i=0;i<s.size();i++){
            mps[s[i]]++;
            mpt[t[i]]++;
        }
        return mps == mpt;
    }
};
