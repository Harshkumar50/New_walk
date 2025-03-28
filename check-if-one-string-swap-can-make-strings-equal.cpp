class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n=s1.size();
        if(s1==s2) return true;
        int diff=0;
        int first=0;
        int sec=0;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                diff++;
                if(diff>2){
                    return false;
                }else if(diff==1){
                    first=i;
                }else{
                    sec=i;
                }
            }
        }
    return s1[first]==s2[sec] && s1[sec]==s2[first];
    }
};
