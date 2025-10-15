int sumDivisibleByK(int* nums, int numsSize, int k) 
{
   int len=numsSize; 
    
   int largestnum=0;

   for(int i=0;i<len;i++)
    if(largestnum<nums[i])
      largestnum=nums[i];


    int *ar=(int *)calloc(largestnum+1,sizeof(int));
    if (ar== NULL)return 0; 

    for(int i=0;i<len;i++)
      {
       ar[nums[i]]++; 
      } 


    int sum=0;

    for(int i=1;i<=largestnum;i++)
     {
       if(ar[i]>0 && ar[i]%k==0)
         sum=sum+i*ar[i]; 
     }

     free(ar);
     return sum;    
}
