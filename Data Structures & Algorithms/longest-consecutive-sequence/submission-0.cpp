class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(), nums.end());
        int maxlen=0;
        int start=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(st.find(nums[i]-1)==st.end()){
                start=nums[i];
                
            }
            
        }
        return maxlen+1;
    }
};
