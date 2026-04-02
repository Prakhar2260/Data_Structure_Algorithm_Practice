int maxProfit(int* prices, int pricesSize) 
{
    int minPrice=prices[0];
    int profit=0;
    int n=pricesSize;

    for(int i=1;i<n;i++)
     {
        if(minPrice>prices[i])
         {
            minPrice=prices[i];
         }

         else
         {
            int p=prices[i]-minPrice;

            if(p>profit)
             {
                profit=p;
             }
         }
     }

     return profit;
    
}
