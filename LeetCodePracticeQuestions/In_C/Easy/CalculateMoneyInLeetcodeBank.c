int totalMoney(int n) 
{
   int sum=0; 
   int index=0;
   int j=0;

  for(int i=1;i<=n;i++)
    {
      if(i%7==1)
      {
       index++;
       j=index;
       sum=sum+j;
      } 

      if(i%7==2)
      {
       j++;
       sum=sum+j;

      } 

      if(i%7==3)
      {
       j++;
       sum=sum+j; 
      }

      if(i%7==4)
      {
       j++;
       sum=sum+j;
      }

      if(i%7==5)
      {
       j++;
       sum=sum+j; 
      }

      if(i%7==6)
      {
        j++;
        sum=sum+j;
      }

      if(i%7==0)
      {
       j++;
       sum=sum+j;
      }
          
    }

    return sum;
}
