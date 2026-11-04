

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int, set<int>> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].insert(i);
        }

        for (int i = 0; i < nums.size(); i++) {

            int reste = target - nums[i];

            mp[nums[i]].erase(i);

            if (mp.find(reste) != mp.end() &&
                !mp[reste].empty()) {

                int j = *mp[reste].begin();

                return {min(i, j), max(i, j)};
                }
        }

        return {};
    }
};
