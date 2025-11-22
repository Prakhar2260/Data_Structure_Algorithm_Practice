int minimumOperations(int* nums, int numsSize) {
    int ops = 0;
    for(int i = 0; i < numsSize; i++) {
        int r = nums[i] % 3;
        if (r != 0) ops++;   
    }
    return ops;
}
