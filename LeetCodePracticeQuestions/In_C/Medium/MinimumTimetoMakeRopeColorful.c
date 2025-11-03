int minCost(char* colors, int* neededTime, int neededTimeSize) 
{
  int sum=0;

  int len=strlen(colors);

    int i=0;
    while(i<len)
   {
    int grpmax=neededTime[i];
    int grpsum=neededTime[i];

    int j=i+1;
    while(j<neededTimeSize && colors[i]==colors[j])
      {
        grpsum=grpsum+neededTime[j];
        if(neededTime[j]>grpmax)
          grpmax=neededTime[j];

        j++;
      }

      sum=sum+grpsum-grpmax;
      i=j;
   }

   return sum;  
    
}
