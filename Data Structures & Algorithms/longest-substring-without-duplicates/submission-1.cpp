class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        int l=0;
        unordered_map<char,int>mp;
        for(int r=0;r<s.size();r++){
            mp[s[r]]++;
            while(mp[s[r]]>1){
                mp[s[l]]--;
                l++;
            }
            maxlen= max(maxlen, r-l+1);
        }
        return maxlen;
    }
};
