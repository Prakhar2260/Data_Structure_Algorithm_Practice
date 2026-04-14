int IsPrime(int n)
{
    if(n<=1)
     return 0;

    else if(n==2)
     return 1;

    else if(n%2==0)
     return 0;

    else
    {
        for(int i=3;i*i<=n;i=i+2)
         {
           if(n%i==0)
              return 0;
         }

         return 1;
    }  
}

int NearestPrime(int x)
{
    int offset=1;

     while(1)
    {
      if(IsPrime(x+offset))
      {
        return (x+offset);
      }

      offset++;
    }  
} 


int minOperations(int* nums, int numsSize)
{
   int sum=0;

   for(int i=0;i<numsSize;i++)
    {
        if(i%2==0)
         {
            if(!IsPrime(nums[i]))
             {
               int k=NearestPrime(nums[i]);
               sum=sum+k-nums[i];    
             }
         }

         else
         {
            if(IsPrime(nums[i]))
            {
                if(nums[i]==2)
                {
                  sum=sum+2;
                }
                 
                else 
                sum=sum+1;
            }
         }
    }

    return sum;
    
}
