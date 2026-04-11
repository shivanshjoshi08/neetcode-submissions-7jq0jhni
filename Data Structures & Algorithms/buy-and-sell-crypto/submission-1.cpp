class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
      int n=prices.size();
      int lastbuy=prices[0];
      int maxProfit=0;
      for(int i=1;i<n;i++)
      {
         if(prices[i]<lastbuy)
         {
            lastbuy=prices[i];
         }else
         {maxProfit=max((prices[i]-lastbuy),maxProfit);}
      }
    return maxProfit;
    }
};
