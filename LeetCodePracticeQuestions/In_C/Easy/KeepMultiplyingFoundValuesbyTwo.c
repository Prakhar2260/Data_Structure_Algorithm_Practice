int findFinalValue(int* nums, int numsSize, int original) {
    int freq[2001] = {0}; 
    
    for (int i = 0; i < numsSize; i++) {
        freq[nums[i]] = 1;  
    }

    while (original <= 2000 && freq[original] == 1) {
        original *= 2;
    }

    return original;
}

