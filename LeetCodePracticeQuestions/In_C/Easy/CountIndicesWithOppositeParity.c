/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countOppositeParity(int* nums, int numsSize, int* returnSize)
{
    int *res=(int*)malloc(numsSize * sizeof(int));
    
    int evenCount=0;
    int oddCount=0;

    for(int i=numsSize-1;i>=0;i--)
    {
        if(nums[i]%2==0)
        {
            res[i]=oddCount;
            evenCount++;
        }
        else
        {
            res[i]=evenCount;
            oddCount++;
        }
    }

      *returnSize=numsSize;
     return res;
    
}
