int cmp(const void *a,const void *b)
{
    return (*(int*)a - *(int*)b);
}


int minOperations(int** grid, int gridSize, int* gridColSize, int x)
{
    int min=10001;
    int rows=gridSize;
    int cols=gridColSize[0];

    int mod=grid[0][0]%x;


    for(int i=0;i<rows;i++)
     {
        for(int j=0;j<cols;j++)
         {
            if(grid[i][j]%x != mod)
             {
                return -1;
             }
         }
     }

     int array[rows*cols];

     int index=0;
     for(int i=0;i<rows;i++)
     {
        for(int j=0;j<cols;j++)
         {
           array[index++]=grid[i][j];
         }
     }

     qsort(array,rows*cols,sizeof(int),cmp);

     int median=array[(rows*cols)/2];

     int operations=0;

     for(int i=0;i<cols*rows;i++)
      {
        operations = operations + abs(array[i]-median) / x;
      } 

      return operations;
}
