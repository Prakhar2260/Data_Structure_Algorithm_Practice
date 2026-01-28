#include <stdlib.h>

int cmp(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int distributeCandies(int* candyType, int candyTypeSize)
{
    
    qsort(candyType, candyTypeSize, sizeof(int), cmp);


    int distinct = 1;
    for (int i = 1; i < candyTypeSize; i++)
    {
        if (candyType[i] != candyType[i - 1])
            distinct++;
    }

    int limit = candyTypeSize / 2;

    return distinct < limit ? distinct : limit;
}
