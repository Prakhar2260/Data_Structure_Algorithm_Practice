/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize) 
{
  int mid=0;
   mid=n/2;

  int *ar=(int *)malloc(n*sizeof(int));

  for(int i=0;i<mid;i++)
   {
    ar[i]=(i+1)*-1;
   } 

   if(n%2==0)
    {
        int val=1;
        for(int i=mid;i<n;i++)
         {
           ar[i]=val;
           val++; 
         }
    }

    else
    {
        int val=0;
        for(int i=mid;i<n;i++)
         {
           ar[i]=val;
           val++; 
         }
    }

    *returnSize=n;

    return ar;
}
