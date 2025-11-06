int numOfUnplacedFruits(int* fruits, int fruitsSize, int* baskets, int basketsSize) 
{
    int count=0;
    for(int i=0;i<fruitsSize;i++)
     {
        for(int j=0;j<basketsSize;j++)
          {
            if(baskets[j]>=fruits[i])
            {
             baskets[j]=0;
             count++;
             break;
            }
             
          }
     }

     return fruitsSize-count;
    
}
