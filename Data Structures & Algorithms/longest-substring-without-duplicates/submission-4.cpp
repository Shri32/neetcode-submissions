class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mpc;
        int l=0;
        int maxlen=0;
        for(int r=0; r< s.length();r++){
            mpc[s[r]]++;
            while(mpc[s[r]] > 1){
                mpc[s[l]]--;
                l++;
            }
            maxlen= max(maxlen, r-l+1);
        }
        return maxlen;
    }
};
