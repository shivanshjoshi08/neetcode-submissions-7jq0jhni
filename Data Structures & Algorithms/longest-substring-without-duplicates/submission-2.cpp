class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(128,0);
        int n=s.size();
        int maxlen=0;
        int i=0,j=0;
        while(j<n)
        {
          if(freq[s[j]]==0)
          {
            freq[s[j]]++;
            maxlen=max(maxlen , j-i+1);
            j++;
          }
          else
          {
            freq[s[i]]--;
            i++;
          }
        }
        return maxlen;
    }
};
