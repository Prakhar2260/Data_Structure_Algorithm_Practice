int smallestRangeI(int* nums, int numsSize, int k) 
{
    int mn=nums[0],mx=nums[0];

    for(int i = 1; i < numsSize; i++)
     {
        if (nums[i] < mn) mn = nums[i];
        if (nums[i] > mx) mx = nums[i];
    }

    int ans = mx - mn - 2 * k;
    return ans > 0 ? ans : 0;
    
}
