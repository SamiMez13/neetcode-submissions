class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        vector<char> st1 = {'(', '[', '{'};
        vector<char> st2 = {')', ']', '}'};

        for (char e : s) {
            auto it1 = find(st2.begin(), st2.end(), e);

            if (it1 == st2.end()) {
                st.push(e);
                continue;
            }

            if (st.empty()) {
                return false;
            }

            char c = st.top();
            auto it2 = find(st1.begin(), st1.end(), c);

            if (it2 - st1.begin() != it1 - st2.begin()) {
                return false;
            }

            st.pop();
        }

        return st.empty();
    }
};