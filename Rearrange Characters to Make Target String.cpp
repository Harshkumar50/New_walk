class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int freqs[26]={0};
        int freqt[26]={0};
        for(char c:s){
            freqs[c-'a']++;
        }
        for(char c:target){
            freqt[c-'a']++;
        }
        int result=INT_MAX;
        for(int i=0;i<26;i++){
            if(freqt[i]>0){
                result=min(result,freqs[i]/freqt[i]);
            }
        }
        return (result==INT_MAX) ? 0 : result;
    }
};
