/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize)
{
    int *leftSum=(int*)malloc(sizeof(int)*numsSize);
    int *rightSum=(int*)malloc(sizeof(int)*numsSize);

    int lSum=0;

     int index=0;
    for(int i=0;i<numsSize;i++)
    {
        leftSum[index++]=lSum;
        lSum+=nums[i];
    }

    index=0;

    for(int i=0;i<numsSize;i++)
     {
        lSum-=nums[i];
        rightSum[index++]=lSum;
     }

     int *answer=(int*)malloc(sizeof(int)*numsSize);

     index=0;

     for(int i=0;i<numsSize;i++)
      {
        answer[index++]=abs(leftSum[i] - rightSum[i]);
      }

      *returnSize=numsSize;

      free(leftSum);
      free(rightSum);

      return answer;
}
