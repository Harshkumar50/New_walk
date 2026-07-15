class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        // int sumOdd=n*n;
        // int sumEven=n*(n+1);
        // int result=0;
        // for(int i=0;i<n;i++){
        //     result=GCD(sumOdd,sumEven);
        // }
        // return result;
        // gcd of (n*n,n(n+1)) is always n;
        // n.gcd(n,n+1); so gcd of consecutive n and n+1 is always 1 so n.1=n; 
        return n;
    }
};
