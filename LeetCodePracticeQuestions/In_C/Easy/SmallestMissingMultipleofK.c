int cmp(const void *a,const void *b)
  {
   return (*(int*)a - *(int*)b); 
  }

int binarysearch(int se,int *ar,int len)
 {
   int l=0;
   int r=len-1;

   while(l<=r)
    {
      int mid=(l+r)/2;

      if(ar[mid]==se)
         return 1;

      if(ar[mid]>se)
        r=mid-1;

      else
        l=mid+1;       
    }

    return 0; 
 }  

int missingMultiple(int* nums, int numsSize, int k) 
{
  int len=numsSize;
  qsort(nums,len,sizeof(int),cmp);
  int value=k;

  if(len==0)
    return value;

  while(1)
   {
    if(binarysearch(value,nums,len)==0)
      {
        break;
      }

     value=value+k; 
   }

     return value;  
}
