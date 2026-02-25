/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int* sortByBits(int* arr, int arrSize, int* returnSize)
{
   int freq[10001];
   for(int i=0;i<10001;i++)
     {
        freq[i]=0;
     }

      qsort(arr,arrSize,sizeof(int),compare);

   int *result=(int*)malloc(arrSize*sizeof(int));
   int index=0;

   for(int i=0;i<arrSize;i++)
   {
     int val=arr[i];

     int bin[32]={0};
     int z=0;
     while(val>0)
      {
        int rem=val%2;
        bin[z++]=rem;
        val=val/2;
      }

      int one=0;
      for(int k=0;k<32;k++)
         {
            if(bin[k]==1)
             {
               one++; 
             }
         }

       freq[arr[i]]=one;  
   } 

   for(int i=0;i<32;i++)
     {
        for(int j=0;j<arrSize;j++)
          {
            if(freq[arr[j]]==i)
             {
                result[index++]=arr[j];
             }
          }
     } 

     *returnSize=index;

     return result;

}
