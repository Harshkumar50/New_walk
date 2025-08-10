class Solution {
public:
    int maxDepth(string s) {
        // int n=string.size();
        // stack<char> st;
        int open=0;
        int result=0;
        for(char &ch:s){
            if(ch=='('){
                // st.push(ch);
                open++;
            }else if(ch==')'){
                // st.pop();
                open--;
            }
            // result=max(result,(int)st.size());
            result=max(result,open);
        }
        return result;
    }
};
