class Solution {
public:
    string clearDigits(string s) {
        // stack<char>st;
        // int n=s.size();
        string result="";
    for(char &ch:s){
       if(isdigit(ch)){
        if(!result.empty()){
            result.pop_back();
        }
        }else{
            result.push_back(ch);
        }
       }
       return result;
    }
};
