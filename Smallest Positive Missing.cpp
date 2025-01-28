class Solution { 
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int small=1;
        for(int num:arr){
            if(num==small){
                small++;
            }
        }
        return small;
    }
};
