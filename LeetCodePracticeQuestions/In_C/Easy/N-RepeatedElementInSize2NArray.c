#include <stdio.h>

int repeatedNTimes(int* nums, int numsSize)
 {
    int freq[10001] = {0};   

    for (int i = 0; i < numsSize; i++)
     {
        if (freq[nums[i]] > 0) 
        {
            return nums[i];
        }
        
        freq[nums[i]]++;
    }

    return -1;
}
