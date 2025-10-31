/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 int cmp(const void *a,const void *b)
  {
    return *(int*)a - *(int*)b;
  }

int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) 
{
 int len=numsSize;

 qsort(nums,len,sizeof(int),cmp);

 int *pr=(int*)malloc(2*sizeof(int));

 int c=0;
 for(int i=0;i<len-1;i++)
  {
    if(nums[i]==nums[i+1])
     {
       pr[c]=nums[i];
       c++;
     }

     if(c==2)
      break;
  } 

   *returnSize=2;
   return pr;
}
