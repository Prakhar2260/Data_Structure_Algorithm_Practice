int findMaxConsecutiveOnes(int* nums, int numsSize) 
{
    int countq=0;
    int count=0;

    for(int i=0;i<numsSize;i++)
      {
        if(nums[i]==1)
          countq++;

        else
          countq=0; 

         if(count<countq)
           count=countq;  
      }
    
    return count;
}
