class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<string> temp;
        for(int i=0;i<strs.size();i++)
        {
            string s = strs[i];
            sort(s.begin(), s.end());
            temp.push_back(s);
        }
        unordered_map<string , pair<int, vector<int>>>mp;
        for(int i=0;i<temp.size();i++)
        {
            mp[temp[i]].first++;
            mp[temp[i]].second.push_back(i);
        }
        
        for(auto it : mp)
        {
            vector<string> tempAns;
            for(int i=0;i<it.second.second.size();i++)
            {
                tempAns.push_back(strs[it.second.second[i]]);
            }
            ans.push_back(tempAns);
        }
        return ans;
    }
};
