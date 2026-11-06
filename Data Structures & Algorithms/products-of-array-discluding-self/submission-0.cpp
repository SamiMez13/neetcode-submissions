
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> result(nums.size(),0);
        int product = 1;
        int nb = 0 ;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]) {
                product *= nums[i];

            }
            else nb++;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (!nums[i]) {
                if (nb>1  )            result[i] =0;
                else             result[i] = product;
                continue ; 
            }
            if (nb)             result[i] = 0;
            else {

                product = product / nums[i];
                result[i] = product;
                product = product *nums[i];
            }
        }
        return result;
    }
};
