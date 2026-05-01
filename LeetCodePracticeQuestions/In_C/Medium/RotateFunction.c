int maxRotateFunction(int* nums, int numsSize)
{
    long long sum=0;
    long long f=0;
    
    for(int i=0;i<numsSize;i++)
     {
        sum+=nums[i];
        f+=(long long)i*nums[i];
    }
    
    long long maxVal=f;
    
    for(int k=1;k<numsSize;k++)
     {
        f=f+sum-(long long)numsSize*nums[numsSize-k];
        
        if(f>maxVal)
            maxVal=f;
    }
    
    return (int)maxVal;
    
}
