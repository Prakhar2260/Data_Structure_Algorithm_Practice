

int minOperations(int* nums, int numsSize)
{
    long long op=0;

    for(int i=1;i<numsSize;i++)
    {
        if (nums[i]<=nums[i-1])
        {
            int required=nums[i-1]+1;
            op=op + (required-nums[i]);
            nums[i]=required;
        }
    }
    return op;

}
