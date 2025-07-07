class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        // Your code here
        int n=arr.size();
        int sum=0;
        unordered_set<int>goblin;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        if(sum==0||goblin.count(sum)){
            return true;
        }
        goblin.insert(sum);
        }
        return false;
    }
};
