class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(), nums.end());
        int maxlen= 0;
        for(int num: nums){
            if(st.find(num - 1) == st.end()){
                int start = num;
                int count=1;
            while(st.find(start + 1) != st.end()){
                start++;
                count++;
            }
            maxlen=max(maxlen,count);
            }
            
        }
        return maxlen;
    }
};
