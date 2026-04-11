class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int i=0,j=n-1;
        int ans=(n-1)*min(heights[i], heights[j]);
        
        while(i<j)
        {
          if(heights[i]<=heights[j]) i++;
          else j--;
          ans = max(ans, (j-i)*min(heights[i], heights[j]));
        }
        return ans;
    }
};
