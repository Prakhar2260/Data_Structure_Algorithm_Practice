/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) 
{
   int *ans=(int*)malloc(nums1Size*sizeof(int));
   int index=0;
   for(int i=0 ; i<nums1Size ;i++)
     {
       for(int j=0;j<nums2Size;j++) 
        {
          if(nums1[i]==nums2[j])
            {
              int large=-1;

              for(int z=j+1;z<nums2Size;z++)
                {
                  if(nums2[j]<nums2[z])
                   {
                    large=nums2[z];
                    break;
                   }  
                }

               ans[index++]=large; 
            }  
        }

     }

     *returnSize=index;

     return ans;   
    
}
