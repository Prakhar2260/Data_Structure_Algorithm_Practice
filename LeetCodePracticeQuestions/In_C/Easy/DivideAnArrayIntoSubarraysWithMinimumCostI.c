int minimumCost(int* nums, int numsSize)
 {
    int ans = INT_MAX;

    for (int j = 1; j < numsSize - 1; j++) 
    {
        for (int k = j + 1; k < numsSize; k++) 
        {
            int cost = nums[0] + nums[j] + nums[k];
            if (cost < ans)
                ans = cost;
        }
    }

    return ans;


    
}
