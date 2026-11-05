
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        set<pair<int, int>> st;
        vector <int > ans;
        map<int, int> mp;
        for (auto& e:nums) {
            mp[e]++;
        }
        for (auto& e:mp) {
            st.insert({e.second, e.first});
        }
        int so_far = 0 ;
        for (auto it = prev(st.end()) ; so_far<k ; it--) {
            ans.push_back(it->second);
            so_far ++;
        }
        return ans;
    }
};

