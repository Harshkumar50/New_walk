class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.size();
        string result="";
        for(int i=0;i<=n-3;i++){
            if(num[i]==num[i+1]&&num[i+1]==num[i+2]){
                string current=num.substr(i,3);
                if(current>result){
                    result=current;
                }
            }
        }
        return result;
    }
};
