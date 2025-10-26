long long removeZeros(long long n) 
{
  long long num1=n;

  long long sum=0;

  while(num1>0)
   {
    int r=num1%10;

    if(r!=0)
     {
      sum=sum*10+r;
     }

     num1=num1/10;
   }

   long long num2=sum;
   long long sum1=0;

   while(num2>0)
     {
      int rem=num2%10;
      sum1=sum1*10+rem;
      num2=num2/10;
        }

    return sum1;    

    
}
