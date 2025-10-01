int numWaterBottles(int numBottles, int numExchange) 
{
  int sum=0;
  sum=sum+numBottles;

  int newfilledbottles=numBottles/numExchange;
  int newemptybottles=numBottles%numExchange;

  while(newfilledbottles!=0)
    {
      sum=sum+newfilledbottles;
      newemptybottles+=newfilledbottles;
      newfilledbottles=newemptybottles/numExchange;
      newemptybottles=newemptybottles%numExchange;
    }

     return sum;
}
