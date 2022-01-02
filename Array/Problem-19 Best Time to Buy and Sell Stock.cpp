/* https://leetcode.com/problems/best-time-to-buy-and-sell-stock/ */


// Solution: O(N)

int maxProfit(vector<int>& prices) {
        
        int maxpro = 0;  // for the maxprofit
  
        int minprice = INT_MAX; // minimum for the all the elements in array
        
        for(int i=0;i<prices.size();i++)
        {
            minprice = min(prices[i],minprice); // storing min value among all the elements of array
          
            maxpro= max(maxpro,prices[i]-minprice);  // comparison of initial maxpro value with maxprofit among element through traversal
        }
        return maxpro;  // returing maxprofit among all
    }
