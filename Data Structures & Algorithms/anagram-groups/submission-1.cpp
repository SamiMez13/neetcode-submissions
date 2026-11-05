

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string , vector<string> >mp;
        for (auto &s : strs) {
            vector< int > vis(26, 0 ) ;
            for (auto &c : s ) {
                int idx = c - 'a';
                vis[idx] +=1 ;
            }
            string score ;
            for (int i = 0 ; i< 26 ; i ++ ) {
                score += to_string(vis[i])+"#";
            }
            mp[score].push_back(s);
        }
        vector<vector<string> > ans;
        for (auto &e:mp)ans.push_back(e.second);

        return ans;
    }
};

