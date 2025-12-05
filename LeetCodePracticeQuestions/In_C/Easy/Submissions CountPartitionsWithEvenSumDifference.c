int countPartitions(int* nums, int numsSize) 
{
   
   int partitions=0;
   
   int totalsum=0;

   for(int i=0;i<numsSize;i++)
    {
      totalsum=totalsum+nums[i];  
    }

    int leftSum=0;

    for(int j=0;j<numsSize-1;j++)
     {
       leftSum=leftSum+nums[j];
       int rightSum=totalsum-leftSum; 

       if( (rightSum-leftSum)%2==0 )
         partitions++;
     }

    return partitions;
    
}
