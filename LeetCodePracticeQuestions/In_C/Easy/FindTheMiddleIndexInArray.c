int findMiddleIndex(int* nums, int numsSize) {
    int totalSum = 0;
    
    // Step 1: Calculate total sum
    for(int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
    }
    
    int leftSum = 0;
    
    // Step 2: Traverse and check condition
    for(int i = 0; i < numsSize; i++) {
        int rightSum = totalSum - leftSum - nums[i];
        
        if(leftSum == rightSum) {
            return i;   // Leftmost valid index
        }
        
        leftSum += nums[i];
    }
    
    return -1;  // If no valid index found
}
