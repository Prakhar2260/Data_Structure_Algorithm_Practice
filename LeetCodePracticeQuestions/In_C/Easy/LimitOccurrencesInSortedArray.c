/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* limitOccurrences(int* nums, int numsSize, int k, int* returnSize) 
{
     int* result=(int*)malloc(numsSize*sizeof(int));

    int count=0;
    int idx=0;

     for(int i=0;i<numsSize;i++)
      {
        if(i==0 || nums[i]!=nums[i-1])
         {
            count = 1;
         }

        else
         {
            count++;
        }

        if(count<=k)
         {
            result[idx++]=nums[i];
         }
    }

    *returnSize=idx;
    return result;
    
}
