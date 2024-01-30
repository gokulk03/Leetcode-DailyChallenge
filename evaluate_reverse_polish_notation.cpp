class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        auto isSign = [](string token){
            return (token =="+"|| token =="-" || token =="*"||token =="/");
        };
    int ans=0;
        for(auto token:tokens){
            if(isSign(token)){
                int num2 = st.top();
                st.pop();
                int num1 = st.top();
                st.pop();
                if(token=="+"){
                    ans=num1+num2;
                    st.push(ans);
                }
                if(token=="-"){
                    ans=num1-num2;
                    st.push(ans);
                }
                if(token=="*"){
                    ans= num1*num2;
                    st.push(ans);
                }
                if(token=="/"){
                    ans=num1/num2;
                    st.push(ans);

                }
            }
            else{
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};