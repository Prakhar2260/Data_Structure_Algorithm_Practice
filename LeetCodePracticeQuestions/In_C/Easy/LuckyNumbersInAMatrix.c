/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* luckyNumbers(int** matrix, int matrixSize, int* matrixColSize, int* returnSize)
{
    int rows=matrixSize;
    int cols=matrixColSize[0];

    int len=rows;

    int* rowArray=(int*)malloc(rows*sizeof(int));
    int* colArray=(int*)malloc(cols*sizeof(int));

    int index=0;

    for(int i=0;i<rows;i++)
      {
        int minRow=matrix[i][0];

        for(int j=1;j<cols;j++)
          {
            if(matrix[i][j]<minRow)
              minRow=matrix[i][j];
          }

          rowArray[i]=minRow;
      }
    

    for(int i=0;i<cols;i++)
      {
        int maxCol=matrix[0][i];

        for(int j=1;j<rows;j++)
          {
            if(matrix[j][i]>maxCol)
              maxCol=matrix[j][i];
          }

          colArray[i]=maxCol;
      }

      int *Answer=(int*)malloc(len*sizeof(int));
    
      int size=0;

      for(int i=0;i<rows;i++)
        {
          for(int j=0;j<cols;j++)
            {
              if(rowArray[i]==colArray[j])
                {
                    size++;
                  Answer[index++]=rowArray[i];
                }  
            }  
        }

        free(colArray);
        free(rowArray); 
     
        *returnSize=size;
        return Answer;
    
}/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* luckyNumbers(int** matrix, int matrixSize, int* matrixColSize, int* returnSize)
{
    int rows=matrixSize;
    int cols=matrixColSize[0];

    int len=rows;

    int* rowArray=(int*)malloc(rows*sizeof(int));
    int* colArray=(int*)malloc(cols*sizeof(int));

    int index=0;

    for(int i=0;i<rows;i++)
      {
        int minRow=matrix[i][0];

        for(int j=1;j<cols;j++)
          {
            if(matrix[i][j]<minRow)
              minRow=matrix[i][j];
          }

          rowArray[i]=minRow;
      }
    

    for(int i=0;i<cols;i++)
      {
        int maxCol=matrix[0][i];

        for(int j=1;j<rows;j++)
          {
            if(matrix[j][i]>maxCol)
              maxCol=matrix[j][i];
          }

          colArray[i]=maxCol;
      }

      int *Answer=(int*)malloc(len*sizeof(int));
    
      int size=0;

      for(int i=0;i<rows;i++)
        {
          for(int j=0;j<cols;j++)
            {
              if(rowArray[i]==colArray[j])
                {
                    size++;
                  Answer[index++]=rowArray[i];
                }  
            }  
        }

        free(colArray);
        free(rowArray); 
     
        *returnSize=size;
        return Answer;
    
}
