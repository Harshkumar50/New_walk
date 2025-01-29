class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int ans=0;
        int n=arr.size();
        for(int i=n-1;i>=0;i--){
            if(arr[i]>=n-i){
                ans++;
            }else{
                break;
            }
        }
        return ans;
    }
};
