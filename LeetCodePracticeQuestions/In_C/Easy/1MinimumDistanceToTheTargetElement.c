int getMinDistance(int* nums, int numsSize, int target, int start) 
{
    int min=10001;
    int k=0;
    for(int i=0;i<numsSize;i++)
     {
        if(nums[i]==target)
         {
           k=abs(i-start);

           if(k<min)
             min=k;
         }

     }

     return min;
    
}
