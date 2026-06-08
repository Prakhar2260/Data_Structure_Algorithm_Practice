/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize)
{
   int *res=(int*)malloc(sizeof(int) * numsSize);

   int index=0;
   int n=numsSize;

   for(int i=0;i<n;i++)
    {
        if(nums[i]<pivot)
         {
            res[index++]=nums[i];
         }
    } 

    for(int i=0;i<n;i++)
    {
        if(nums[i]==pivot)
         {
            res[index++]=nums[i];
         }
    } 
   
    for(int i=0;i<n;i++)
    {
        if(nums[i]>pivot)
         {
            res[index++]=nums[i];
         }
    } 


    *returnSize=numsSize;

    return res;


    
}
