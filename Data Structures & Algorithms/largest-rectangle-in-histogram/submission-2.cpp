class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int ans =0 ;
        vector<int> left(n, -1), right(n,n);
        stack<int> st1 ,st2;
        for (int i= 0 ; i<n ;i ++ ) {
            while (!st1.empty()&&heights[st1.top()]>= heights[i]) {
                st1.pop();
            }
            if (!st1.empty()) {
                left[i] = st1.top()+1;
            }
            else left[i] = 0;
            st1.push(i);

        }
        st1 = stack<int>();
        for (int i= n-1 ; i>=0;i-- ) {
            while (!st1.empty()&&heights[st1.top()]>= heights[i]) {
                st1.pop();
            }
            if (!st1.empty()) {
                right[i] = st1.top()-1;
            }
            else right[i] = n-1;
            st1.push(i);
        }
        for (int i = 0 ; i< n ; i ++ ) {
            ans = max(ans, (right[i] - left[i]+1) * (heights[i]) ) ;
        }
        return ans;

    }
};
