
class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int> ans;
        int n=arr.size();
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(arr[j]>=arr[i]){
        //             ans.push_back(arr[j]);
        //         }
        //     }
        // }
        // return ans;
        int right=arr[n-1];
        ans.push_back(right);
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=right){
                right=arr[i];
                ans.push_back(right);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
