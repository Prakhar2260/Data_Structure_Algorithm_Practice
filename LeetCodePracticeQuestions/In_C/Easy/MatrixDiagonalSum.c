int diagonalSum(int** mat, int matSize, int* matColSize)
{
    int sum=0;

    for(int i=0;i<matSize;i++)
      {
        for(int j=0;j<matColSize[i];j++)
          {
            if(i==j)
            {
              sum=sum+mat[i][j];
            }

            if(i+j==matSize-1)
              {
                sum=sum+mat[i][j];
              }
          }
      }

      if(matSize%2==0)
       return sum;

      return sum-mat[matSize/2][matSize/2];
}
