long long maxMatrixSum(int** matrix, int matrixSize, int* matrixColSize) {
    long long MaxSum=0;
    int negatives=0;
    int minAbs = 100001;

    for (int i=0; i < matrixSize; i++) 
    {
        for (int j = 0; j < matrixColSize[i]; j++)
         {
            int val=matrix[i][j];

            if (val < 0)
                negatives++;

             int absVal = abs(val);
             MaxSum =MaxSum + absVal;

             if (absVal<minAbs)
                minAbs = absVal;
        }
    }

    if (negatives % 2 != 0)
        MaxSum -= 2LL * minAbs;

    return MaxSum;
}
