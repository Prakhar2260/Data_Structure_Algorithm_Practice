
int maxProductDifference(int* nums, int numsSize)
{
   int max1 = 0, max2 = 0;
    int min1 = 10001, min2 = 10001;

    for (int i=0;i<numsSize;i++)
     {
        int x=nums[i];

        if(x>max1)
         {
            max2=max1;
            max1=x;
         } 

         else if(x>max2)
          {
            max2=x;
          }

         if(x<min1)
          {
            min2=min1;
            min1=x;
          } 
         else if(x<min2)
          {
            min2=x;
          }
    }

    return (max1*max2)-(min1*min2);

}
