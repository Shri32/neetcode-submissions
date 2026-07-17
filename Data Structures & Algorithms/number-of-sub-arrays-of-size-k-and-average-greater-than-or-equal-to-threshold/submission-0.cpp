class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum += arr[i];
        }
        int c=0;
        if(sum >= threshold * k)c++;

        for(int i=k;i<arr.size();i++){
            sum += arr[i];
            sum -= arr[i-k];
            if(sum>= threshold *k)c++;
        }
        return c;
    }
};