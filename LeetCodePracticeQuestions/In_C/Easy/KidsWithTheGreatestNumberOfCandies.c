/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize)
{
   bool *result=(bool*)malloc(sizeof(bool) * candiesSize);
    int index=0;

   for(int i=0;i<candiesSize;i++)
    {
        int val=candies[i]+extraCandies;
        int f=1;
        for(int j=0;j<candiesSize;j++)
          {
            if(val>=candies[j] && i!=j)
             {
                f=1;
             }

             else if(val<candies[j])
             {
                f=0;
                break;
             }
          }

          if(f)
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
