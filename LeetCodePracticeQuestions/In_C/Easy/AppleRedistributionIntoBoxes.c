int cmp(const void *a ,const void *b)
    {
      return (*(int*)b - *(int*)a);  
    }


int minimumBoxes(int* apple, int appleSize, int* capacity, int capacitySize)
{
    int totalApple=0;

    for(int i=0;i<appleSize;i++)
      {
        totalApple=totalApple+apple[i];
      }

    qsort(capacity , capacitySize , sizeof(int) , cmp);
    int box=0;
    for(int i=0 ;i < capacitySize;i++)
      {
        box++;
        totalApple=totalApple-capacity[i];

        if(totalApple<=0)
          break;
      }

      return box;
}
