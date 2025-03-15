class Solution {
public:
    int maximumCount(vector<int>& nums) {
       auto lambdaP=[](int nums){
        return nums>0;
       };
       auto lambdaN=[](int nums){
        return nums<0;
       };
       int positive = count_if(begin(nums),end(nums),lambdaP);
       int negative = count_if(begin(nums),end(nums),lambdaN);
       return max(positive,negative);
    }
};
