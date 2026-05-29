int DigitSum(int num)
 {
    int sum=0;

    while(num>0)
     {
        int rem=num%10;
        sum=sum+rem;
        num=num/10;
     }

     return sum;
 }


int minElement(int* nums, int numsSize) 
{
    int min=100001;

   for(int i=0;i<numsSize;i++)
    {
        int temp=DigitSum(nums[i]);

        if(min>temp)
         {
            min=temp;
         }
    }

  return min;
    
}
