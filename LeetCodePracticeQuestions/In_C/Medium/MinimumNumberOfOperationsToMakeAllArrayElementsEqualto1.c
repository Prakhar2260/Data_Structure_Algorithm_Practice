#include <stdio.h>

// Function to compute gcd of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int minOperations(int* nums, int numsSize) {
    int overall_gcd = nums[0];

    for (int i = 1; i < numsSize; i++)
        overall_gcd = gcd(overall_gcd, nums[i]);

    // If overall gcd > 1, impossible to get all 1s
    if (overall_gcd > 1)
        return -1;

    // If any element is already 1
    int ones = 0;
    for (int i = 0; i < numsSize; i++)
        if (nums[i] == 1)
            ones++;

    if (ones > 0)
        return numsSize - ones;  // convert all others to 1

    // Otherwise, find smallest subarray with gcd = 1
    int minLen = numsSize + 1;
    for (int i = 0; i < numsSize; i++) {
        int g = nums[i];
        for (int j = i + 1; j < numsSize; j++) {
            g = gcd(g, nums[j]);
            if (g == 1) {
                int len = j - i + 1;
                if (len < minLen)
                    minLen = len;
                break;
            }
        }
    }

    // If we found such a subarray
    if (minLen <= numsSize)
        return (minLen - 1) + (numsSize - 1);

    return -1;
}
