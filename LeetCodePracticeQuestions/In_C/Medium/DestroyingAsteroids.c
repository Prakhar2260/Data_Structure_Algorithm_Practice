int cmp(const void *a , const void *b)
   {
    int x = *(const int*)a;
    int y = *(const int*)b;

     if(x<y)
        return -1;

     else
        return 1;

     return 0;
   } 


bool asteroidsDestroyed(int mass, int* asteroids, int asteroidsSize) 
{
    long long sum=mass;

    qsort(asteroids,asteroidsSize,sizeof(int),cmp);

    for(int i=0;i<asteroidsSize;i++)
     {
        if(asteroids[i]<=sum)
         {
            sum=sum+asteroids[i];
         }

         else
          return false;
     }

     return true;
    
}
