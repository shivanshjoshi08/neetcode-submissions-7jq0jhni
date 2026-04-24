class Solution {
   public:
    vector<pair<int, int>> nge(vector<int> arr) {
        int n = arr.size();
        stack<int> st;
        vector<pair<int, int>> ans(n, {-1, -1});
        for (int i = 0; i < n; i++) {
            while  (!st.empty() && arr[st.top()] < arr[i]) {
                ans[st.top()] = {arr[i], i};
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
    vector<int> dailyTemperatures(vector<int>& t) {
        int n = t.size();
        vector<int> res(n, 0);
        vector<pair<int, int>> NGE = nge(t);
        for (int i = 0; i < n; i++) {
            if (NGE[i].second == -1) {
                res[i] = 0;
            } else {
                res[i] = NGE[i].second - i;
            }
        }
        return res;
    }
};
