class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        long long result=0;
        long long maxdiff=0;
        long long maxi=0;
        if(n<3) return -1;
        for(int k=0;k<n;k++){
            result=max(result,maxdiff*nums[k]);
            maxdiff=max(maxdiff,maxi-nums[k]);
            maxi=max(maxi,(long long)nums[k]);
        }
        return result;
    }
};
