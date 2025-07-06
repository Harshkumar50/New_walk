class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        map<int,int>mp;
        for(auto num:arr){
            mp[num]++;
        }
        int maxz=-1;
        for(auto it:mp){
            if(it.first==it.second){
                 maxz=max(maxz,it.first);
            }
        }
        return maxz;
    }
};
