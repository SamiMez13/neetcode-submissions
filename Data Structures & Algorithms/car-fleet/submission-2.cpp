class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector < pair <int , double > >v;
        int sz = position.size();
        for (int i = 0 ; i< sz ; i ++) {
            v.push_back({position[i],(double)(target-position[i])/speed[i] });
        }
        sort(v.begin(), v.end(), greater<pair<int ,double>>());
        stack <double > st ;
        for (int i = 0 ; i< sz ;i ++) {
            if (st.empty()) {
                st.push(v[i].second) ; continue ;
            }
            double x = st.top() ;
            if (v[i].second> x) {
                st.push(v[i].second );
            }
        }
        return st.size();
    }
};