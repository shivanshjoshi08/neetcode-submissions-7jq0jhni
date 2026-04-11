class Solution {
public:
    int maxFreq(vector<int>& arr)
    {
      int ans=0;
      unordered_map<int, int>mp;
      for(int i=0;i<arr.size();i++)
      {
        mp[arr[i]]++;
      }
      for(auto it :mp)
      {
        ans=max(ans,it.second);
      }
      return ans;
    }
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
