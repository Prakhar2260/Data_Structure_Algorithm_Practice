/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoOutOfThree(int* nums1, int nums1Size, int* nums2, int nums2Size, int* nums3, int nums3Size, int* returnSize) 
{
  int freq1[101]={0};  
  int freq2[101]={0};
  int freq3[101]={0};

  for(int i=0;i<nums1Size;i++)
   {
     freq1[nums1[i]]++;
   }

   for(int i=0;i<nums2Size;i++)
   {
     freq2[nums2[i]]++;
   }

   for(int i=0;i<nums3Size;i++)
   {
     freq3[nums3[i]]++;
   }

    int *result = (int*) malloc(sizeof(int)*100);

    int index=0;
    for(int i=0;i<101;i++)
     {
        if((freq1[i]!=0 && freq2[i]!=0) || (freq2[i]!=0 && freq3[i]!=0) || (freq1[i]!=0 && freq3[i]!=0) )
         {
           result[index++]=i;
         }
     }     

     *returnSize=index;

     return result;
    
}
