class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();
        if (n1 > n2) return false;
        vector<int> freq1(128, 0);
        vector<int> freq2(128, 0);

        for (int i = 0; i < n1; i++) {
            freq1[s1[i]]++;
            freq2[s2[i]]++;
        }

        if (freq1 == freq2) return true;
        for(int i=n1;i<n2;i++){
            freq2[s2[i]]++;
            freq2[s2[i-n1]]--;
            if (freq1 == freq2) return true;
        }
        return false;
    }
};
