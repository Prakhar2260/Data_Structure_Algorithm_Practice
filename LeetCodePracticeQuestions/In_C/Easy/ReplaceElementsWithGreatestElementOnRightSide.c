/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* arr, int arrSize, int* returnSize)
{
    int *result=(int*)malloc(arrSize*(sizeof(int)));
    int index=0;

    int max=-1;

    for(int i=arrSize-1;i>=0;i--)
      {
        result[i]=max;

        if(arr[i]>max)
         {
            max=arr[i];
         }
      }

      *returnSize=arrSize;

      return result;
}
