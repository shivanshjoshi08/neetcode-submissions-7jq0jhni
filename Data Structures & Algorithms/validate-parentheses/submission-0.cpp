class Solution {
   public:
    bool isValid(string s) {
        int OpenClose = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                OpenClose++;
            } else {
                OpenClose--;
            }
        }
        if(OpenClose==0)return true;
        else return false;
    }
};
