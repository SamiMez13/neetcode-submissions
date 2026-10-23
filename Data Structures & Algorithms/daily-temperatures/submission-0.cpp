
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int sz= temperatures.size() ;
        vector<int> ans(sz,0);
        set<pair<int , int > > st;
        for (int i = 0 ; i < sz ; i ++ ) {
            if (st.empty()) {
                st.insert(make_pair(temperatures[i],i ));
                continue ;
            }
            while (!st.empty() ) {
                auto [x, y] = *st.begin();
                if (x>=temperatures[i]) break ;
                st.erase(st.begin());
                ans[y]= i - y;
            }
            st.insert(make_pair(temperatures[i],i ));

        }
        return ans ; 
    }
};
