int* findPeaks(int A[], int n, int* returnSize)
{
    // write your code here
    
    int *res=(int*)malloc(sizeof(int) * n);
    
     int index=0;
     
     if(A[0]>A[1])
      res[index++]=A[0];
      
     for(int i=1;i<n-1;i++)
     {
         if(A[i]>A[i-1] && A[i]>A[i+1])
          {
              res[index++]=A[i];
          }
     }
     
     if(A[n-1]>A[n-2])
      res[index++]=A[n-1];
     
     if(index==0)
     {
         res[index++]=-1;
     }
     
     *returnSize=index;
     
     return res;
     
    
}
