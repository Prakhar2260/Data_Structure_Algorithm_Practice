int minimumSwaps(int* nums, int numsSize) 
{
    int zero=0;

    for(int i=0;i<numsSize;i++)
     {
        if(nums[i]==0)
         {
            zero++;
         }
     }

     if(zero==numsSize)
      return 0;
     
     int misplace=0;

     for(int j=0;j<numsSize-zero;j++)
      {
        if(nums[j]==0)
         misplace++;
      }

      return misplace;
    
}
