int cmp(void const *a , void const *b)
  {
    return (*(int*)a-*(int*)b);
  }



int matchPlayersAndTrainers(int* players, int playersSize, int* trainers, int trainersSize)
{
    int plen=playersSize;
    int tlen=trainersSize;

    qsort(trainers , tlen , sizeof(int) , cmp);
    qsort(players , plen , sizeof(int) , cmp);
    int count=0;
    int i=0;
    int j=0;

    while(i<plen && j<tlen)
     {
        if(players[i]<=trainers[j])
          {
            i++;
            j++;
            count++;
          }

          else
          {
            j++;
          }
     }
      return count; 
}
