class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int diff=-1;
        // int result=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            //    if(i>j && nums[i]<nums[j]) return -1;
                if(nums[j]>nums[i]){
                    diff=max(diff,nums[j]-nums[i]);
                }
            }
        }
        // return max(result,diff);
        return diff;
    }
};
