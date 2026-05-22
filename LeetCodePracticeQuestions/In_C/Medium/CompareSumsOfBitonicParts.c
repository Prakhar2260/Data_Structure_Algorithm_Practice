int compareBitonicSums(int* nums, int numsSize) 
{
   int max=0;
   int index=0;

   for(int i=0;i<numsSize;i++)
    {
        if(max<nums[i])
         {
            max=nums[i];
            index=i;
         }
    } 

    long long sum1=0;
    long long sum2=0;

    for(int i=0;i<numsSize;i++)
     {
        if(i<index)
          sum1=sum1+nums[i];

        if(i>index)
          sum2=sum2+nums[i];   
     }

     if(sum1>sum2)
      return 0;

     else if(sum1<sum2)
      return 1;

      return -1;
}
