int cmp(void const *a , void const *b)
  {
    return (*(int*)a-*(int*)b);
  }

int heightChecker(int* heights, int heightsSize) 
{
    int expected[heightsSize];

    for(int i=0;i<heightsSize;i++)
     {
        expected[i]=heights[i];
     }

     qsort(expected , heightsSize , sizeof(int) , cmp); 

     int count=0;

     for(int i=0;i<heightsSize;i++)
      {
        if(expected[i]!=heights[i])
           count++;
      }

       return count;  
}
