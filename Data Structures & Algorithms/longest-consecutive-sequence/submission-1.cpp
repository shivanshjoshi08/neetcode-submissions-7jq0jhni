class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(), nums.end());
        int maxlen=0;
        for(int i=0;i<nums.size();i++)
        {
            if(st.find(nums[i]-1)==st.end()){
                int start=nums[i];
                int currStreak=1;
                while(st.find(start+1)!=st.end())
                {
                    start++;
                    currStreak++;
                }
                maxlen=max(maxlen, currStreak);
            }
        }
        return maxlen;
    }
};
