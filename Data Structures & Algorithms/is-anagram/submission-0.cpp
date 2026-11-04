
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector <int> vis(26, 0) ;
        for (auto&e:s ) {
            vis[e-'a']++;
        }
        for (auto&e:t ) {
            vis[e-'a']--;
        }
        for (int  i = 0 ; i < 26 ; i++) {
            if (vis[i]) return false ;
        }
        return true;
    }
};
