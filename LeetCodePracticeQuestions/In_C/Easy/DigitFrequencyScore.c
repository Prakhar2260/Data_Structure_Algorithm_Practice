int digitFrequencyScore(int n)
{
  int freq[10]={0};

  int num=n;

  while(num>0)
  {
    int rem=num%10;
    freq[rem]++;
    num=num/10;
  }   

  int sum=0;

  for(int i=0;i<10;i++)
   {
    if(freq[i]>0)
     {
        sum+=i * freq[i];
     }
   }

   return sum;
    
}
