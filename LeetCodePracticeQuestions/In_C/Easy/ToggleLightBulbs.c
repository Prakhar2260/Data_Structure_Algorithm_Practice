/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* toggleLightBulbs(int* bulbs, int bulbsSize, int* returnSize) 
{
    int array[101];

     for(int i=0;i<101;i++)
       array[i]=0;

     for(int i=0;i<bulbsSize;i++)
      {
        if(array[bulbs[i]]==0)
          {
            array[bulbs[i]]=1;
          }  

        else if(array[bulbs[i]]==1)
          {
            array[bulbs[i]]=0;
          } 

      }    

          int *list=(int *)malloc(bulbsSize * sizeof(int));

          int index=0;

          for(int i=1;i<101;i++)
           {
             if(array[i]==1)
              {
                list[index++]=i;
              }
           }

           *returnSize=index;
           return list;
}
