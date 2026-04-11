class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        vector<int> freq(128,0);
        int i=0, j=0;
        int maxlen=0;
        while(j<n)
        {
          
          freq[s[j]]++;
          int maxi = *max_element(freq.begin(), freq.end());
          int len = j-i+1;
          if((len - maxi) <= k)
          {
            maxlen=max(maxlen, len);
            j++;
          }else{
            freq[s[i]]--;
            i++;
            j++;
          }
        }
        return maxlen;
    }
};
