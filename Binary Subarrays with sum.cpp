class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum=0;
        int n=nums.size();
        unordered_map<int,int>mp;
        int count=0;
        mp[0]=1;  // or you can insert it by mp.insert({0,1})
    for(int num:nums){
        sum+=num;
        // int remainsum=sum-goal;
        if(mp.find(sum-goal)!=mp.end()){
            count+=mp[sum-goal];
        }
        mp[sum]++;
    }
    return count;
    }
};
