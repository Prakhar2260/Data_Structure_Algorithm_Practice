/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) 
{
    int* result = (int*)malloc(sizeof(int) * (right - left + 1));
    int count = 0;

    for (int num = left; num <= right; num++) {
        int x = num;
        int valid = 1;

        while (x > 0) {
            int digit = x % 10;

            if (digit == 0 || num % digit != 0) {
                valid = 0;
                break;
            }

            x /= 10;
        }

        if (valid) {
            result[count++] = num;
        }
    }

    *returnSize = count;
    return result;
    
}
