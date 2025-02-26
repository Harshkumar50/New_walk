class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int maxsum=nums[0];
        int minsum=nums[0];
        int currmaxsum=nums[0];
        int currminsum=nums[0];
        for(int i=1;i<n;i++){
            currmaxsum=max(currmaxsum+nums[i],nums[i]);
            maxsum=max(maxsum,currmaxsum);
            currminsum=min(currminsum+nums[i],nums[i]);
            minsum=min(currminsum,minsum);
        }
        return max(maxsum,abs(minsum));
    }
};
