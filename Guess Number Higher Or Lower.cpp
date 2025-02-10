/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int s=1;
        int e=n;
        while(s<=e){
            int guesss=s+(e-s)/2;
            int val=guess(guesss);
            if(val==0){
                return guesss;
            }else if(val==-1){
                e=guesss-1;
            }else{
                s=guesss+1;
            }
        }
            return -1;
    }
};
