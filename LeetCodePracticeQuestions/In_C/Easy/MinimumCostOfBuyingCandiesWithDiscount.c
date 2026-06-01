int cmp(const void *a,const void *b)
{
    int x=*(const int*)a;
    int y=*(const int*)b;

    if(x<y)
     {
        return 1;
     }

     if(y<x)
      {
        return -1;
      }

      return 0;
}


int minimumCost(int* cost, int costSize) 
{
   qsort(cost,costSize,sizeof(int),cmp);

   int MinCost=0;
   for(int i=0;i<costSize;i++)
    {
        if(i%3!=2)
         {
            MinCost+=cost[i];
         }
    }

    return MinCost;
}
