class Solution {
public:
    string minWindow(string s, string t) {
        int startIdx=-1, minLen=1e9;
        for(int i=0;i<s.size();i++){
            int count=0;
            unordered_map<char,int>mp;
            for(auto c:t)mp[c]++;
           // startIdx=i;
            for(int j=i;j<s.size();j++){
                if(mp[s[j]]>0)count++;
                mp[s[j]]--;
                if(count==t.size() && 
                j-i+1<=minLen){
                    minLen=j-i+1;
startIdx=i;break;
                }
                //reak;
            }
           // if(count==t.size() && j-i+1<=minLen){
           //     minLen=j-i+1;
           // }
        }
        return startIdx==-1?"":s.substr
        (startIdx,minLen);
    }
};