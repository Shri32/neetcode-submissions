class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>hi;
        for(int i=0;i<nums.size();i++){
            int prod=1;
            for(int j=0;j<nums.size();j++){
                if(i != j)
            prod = prod * nums[j];
            }
            hi.push_back(prod);
        }
        return hi;
    }
};
