class Solution {
   public:
    int carFleet(int target, vector<int>& p, vector<int>& s) {
        int n = p.size();
        vector<double> stepsArray(n, 0);
        for (int i = 0; i < n; i++) {
            double distToCover = target - p[i];
            double steps = distToCover / s[i];
            stepsArray[i] = steps;
        }
        unordered_map<int, int> mp;
        for (int i : stepsArray) {
            mp[i]++;
        }
        int fleet = 0;
        for (auto it : mp) {
            fleet += it.second;
        }
        return fleet-1;
    }
};
;