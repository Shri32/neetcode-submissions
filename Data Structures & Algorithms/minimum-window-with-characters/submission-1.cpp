class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mps;
        int have=0;
        int l=0;
        int start=0;
        int need= t.size();
        int minlen=INT_MAX;
        unordered_map<char,int>mpt;
        for(int i=0;i<t.size();i++){
            mpt[t[i]]++;
        }
        for(int r=0;r<s.size();r++){
            mps[s[r]]++;

            if(mps[s[r]] <= mpt[s[r]])have++;
            while(have == need){
                if(r - l+1 <minlen){
                    minlen = r - l +1;
                    start= l;
                }
                if(mps[s[l]] <= mpt[s[l]])have--;

                mps[s[l]]--;
                l++;
                
            }
        }
        if(minlen == INT_MAX)return "";

        return s.substr(start, minlen);
    }
};
