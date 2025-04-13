class Solution {
public:
        const int m=1e9+7;
    int power(long long a,long long b){
        if(b==0) return 1;
        long long half=power(a,b/2);
        long long result=(half*half)%m;
        if(b%2==1){
            result=(result*a)%m;
        }
        return result;
    }
    int countGoodNumbers(long long n) {
        // for even n+1/2 and for odd n+1/2;
        // int even=n+1/2;
        // int odd=n/2;
        return (long long)power(5,(n+1)/2)*power(4,n/2)%m;
    }
};
