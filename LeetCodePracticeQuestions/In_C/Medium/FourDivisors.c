int sumFourDivisors(int* nums, int numsSize)
{
    int bigSum=0;

    for(int i=0;i<numsSize;i++)
      {
        int sum=0;
        int count=0;;

        for(int j=1;j<=nums[i];j++)
          {
            if(nums[i]%j==0)
              {
                sum=sum+j;
                count++;
              }

            if(count>4)
              {
                break;
              }
          }

          if(count==4)
            {
               bigSum= bigSum + sum; 
            }
      }

      if(bigSum!=0)
        return bigSum;

      return 0;

    
}
