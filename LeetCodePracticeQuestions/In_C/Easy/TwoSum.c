/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
  *returnSize=2;  
 int *ar=(int*)malloc(*returnSize*(sizeof(int)));

 for(int i=0;i<numsSize;i++)
   {
    for(int j=i+1 ;j<numsSize;j++)
      {
        if(nums[i]+nums[j]==target)
          {
            ar[0]=i;
            ar[1]=j;

            return ar;
          }
      }
   }

   return NULL;   
}


