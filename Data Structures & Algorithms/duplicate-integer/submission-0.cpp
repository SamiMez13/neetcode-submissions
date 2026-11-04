


class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> st;
        for (auto&e :nums) st.insert(e);
        if (st.size()<nums.size()) return true ;

        return false ;
    }
};
