class Solution {
public:
    string clean(string s)
    {
        int n=s.size();
        string ans;
        for(int i=0;i<n;i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')) 
            {
                ans.push_back(tolower(s[i]));
            }
        }
        return ans;
    }

    bool isPalindrome(string s) {
        int n=s.size();
        string s1=clean(s);
        int i=0,j=s1.size()-1;
        while(i<=j)
        {
            if(s1[i]!=s1[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
