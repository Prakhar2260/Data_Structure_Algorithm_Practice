/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize)
{
   bool *result=(bool*)malloc(sizeof(bool) * candiesSize);
    int index=0;

    int max=0;

    for(int i=0;i<candiesSize;i++)
     {
        if(max<candies[i])
         {
            max=candies[i];
         }
     }

     for(int j=0;j<candiesSize;j++)
      {
        if(candies[j]+extraCandies >= max)
         {
            result[index++]=true;
         }

         else
         {
            result[index++]=false;
         }
      } 

    *returnSize=candiesSize;

    return result;

    
}
