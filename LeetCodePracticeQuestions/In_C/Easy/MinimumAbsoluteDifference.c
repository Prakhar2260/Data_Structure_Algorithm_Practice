/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int cmp(const void *a,const void *b)
 {
    int x=*(int*)a;
    int y=*(int*)b;

    if(x>y)
     return 1;

    else if(x<y)
      return -1;

      else
       return 0;  
 }


int** minimumAbsDifference(int* arr, int arrSize, int* returnSize, int** returnColumnSizes)
{
    int n=arrSize;

    qsort(arr,n,sizeof(int),cmp);

    int minDiff=arr[1]-arr[0];

    for(int i=1;i<n;i++) 
    {
    if((arr[i]-arr[i-1])<minDiff)
        minDiff=arr[i]-arr[i-1];
    }

    int count=0;

    for(int i=1;i<n;i++) 
     {
        if(arr[i]-arr[i-1]==minDiff)
          count++;
     }

     *returnSize=count;

     *returnColumnSizes=(int*)malloc(count*sizeof(int));

     int **res=(int**)malloc(count*sizeof(int*));

     for(int i=0;i<count;i++)
      {
        res[i]=(int*)malloc(2*sizeof(int));
        (*returnColumnSizes)[i]=2;
      }

     int index=0; 
    for(int i=1;i<n;i++) 
     {
        if(arr[i]-arr[i-1]==minDiff)
          {
            res[index][0]=arr[i-1];
            res[index][1]=arr[i];
            index++;
          }
     }

     return res;
}
