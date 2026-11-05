class Solution {
public:

    string encode(vector<string>& strs) {
        string res;

        for (auto str : strs) {
            int sz = str.size();
            res += to_string(sz) + "#" + str;
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;

        bool neww = true;
        int sz = 0;
        int cnt = 0;
        string str;

        for (auto i = s.begin(); i != s.end(); i++) {

            if (neww) {

                if (*i == '#') {
                    neww = false;

                    if (sz == 0) {
                        res.push_back("");
                        neww = true;
                        sz = 0;
                    }
                }
                else {
                    sz = sz * 10 + (*i - '0');
                }

            }
            else {

                cnt++;
                str += *i;

                if (cnt == sz) {
                    res.push_back(str);

                    str = "";
                    sz = 0;
                    cnt = 0;
                    neww = true;
                }
            }
        }

        return res;
    }
};