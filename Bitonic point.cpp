class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        // code here
        int n=arr.size();
        int mv=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>mv)
            mv=arr[i];
        }
        // sort(arr.begin(),arr.end());
        // return arr[n-1];
        return mv;
    }
};
