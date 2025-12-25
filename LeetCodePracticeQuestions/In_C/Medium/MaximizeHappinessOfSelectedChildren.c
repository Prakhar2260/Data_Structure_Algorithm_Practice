int cmp(void const *a , void const *b)
 {
   return (*(int*)b - *(int*)a); 
 }


long long maximumHappinessSum(int* happiness, int happinessSize, int k)
 {
   qsort(happiness , happinessSize , sizeof(int) , cmp);

   long long total=0;

   for(int i=0 ; i<k ;i++)
    {
        if (happiness[i]-i> 0)
            total=total + happiness[i]-i;

        else
            break; 
    }

    return total ;
}
