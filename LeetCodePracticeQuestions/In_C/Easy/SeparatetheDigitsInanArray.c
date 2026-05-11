/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* separateDigits(int* nums, int numsSize, int* returnSize) 
{
    int *ans=(int*)malloc(sizeof(int)*numsSize*6);   
    int k=0;
    
    for(int i=0;i<numsSize;i++)
     {
        int n=nums[i];
        
        int temp[10];
        int t=0;
        
        while(n>0)
         {
            temp[t++]=n%10;
            n/=10;
        }
        
        for(int j=t-1;j>=0;j--)
         {
            ans[k++]=temp[j];
         }
    }
    
    *returnSize=k;
    return ans;
    
}
