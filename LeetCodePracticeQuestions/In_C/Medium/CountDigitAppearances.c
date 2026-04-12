int check(int n,int digit)
{
    int count=0;

    while(n>0)
    {
        int rem=n%10;
        if(rem==digit)
         count++;
         n=n/10;
    } 

    return count;
} 




int countDigitOccurrences(int* nums, int numsSize, int digit) 
{
   int times=0;

  for(int i=0;i<numsSize;i++)
   {
     int num=nums[i];
     
     times=times+check(num,digit);

   }

   return times;
    
}
