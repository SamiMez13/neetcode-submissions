
class Solution {
public:

    stack <int > st ;
    int evalRPN(vector<string>& tokens) {
        for (auto  &e :tokens ) {
            if (e == "+" || e == "-" ||
                e == "*" || e == "/") {
                int  x =st.top();
                st.pop();
                int  y =st.top();
                st.pop();
                if (e == "+") st.push(x+y);
                else if (e == "-")st.push(y-x);
                else if (e == "*")st.push(x*y);
                else st.push(y/x);
            }
            else {
                st.push(stoi(e));
            }

        }
        return st.top() ;
    }
};
