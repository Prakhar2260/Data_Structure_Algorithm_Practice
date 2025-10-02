int maxBottlesDrunk(int numBottles, int numExchange) 
{
  int fullbottles=numBottles;
  int exchange=numExchange;
  int emptybottles=0;

  int sum=0;

  while(fullbottles!=0)
  {
    sum=sum+fullbottles;
    emptybottles+=fullbottles;
    fullbottles=0;

    while(emptybottles>=exchange)
      {
        emptybottles-=exchange;
        exchange++; 
        fullbottles++;
      }
  }

 return sum;  
}
