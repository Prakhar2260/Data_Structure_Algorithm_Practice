#include <stdlib.h>

int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int maxWidthOfVerticalArea(int** points, int pointsSize, int* pointsColSize) {
    int* x = (int*)malloc(pointsSize * sizeof(int));

    for (int i = 0; i < pointsSize; i++)
     {
        x[i] = points[i][0];
    }

    
    qsort(x, pointsSize, sizeof(int), cmp);

    
    int maxGap = 0;
    for (int i = 1; i < pointsSize; i++) {
        int gap = x[i] - x[i - 1];
        if (gap > maxGap)
            maxGap = gap;
    }

    free(x);
    return maxGap;
}
