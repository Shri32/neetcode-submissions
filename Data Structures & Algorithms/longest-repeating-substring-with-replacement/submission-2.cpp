class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mpc;
        int maxf=0;
        int l=0;
        int maxlen=0;
        for(int i=0;i<s.length();i++){
            mpc[s[i]]++;

        maxf=max(maxf, mpc[s[i]]);
        
        while((i - l + 1) - maxf > k){
            mpc[s[l]]--;
            l++;
        }
         maxlen=max(maxlen, i-l+1);
        }
        return maxlen;
    }
};
