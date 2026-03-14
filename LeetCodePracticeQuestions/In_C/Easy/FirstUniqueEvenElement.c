int firstUniqueEven(int* nums, int numsSize) 
{
  int len=numsSize;

  int freq[101]={0};

  for(int i=0;i<numsSize;i++)
   {
     freq[nums[i]]++;
   }

   for(int i=0;i<numsSize;i++)
     {
        if(nums[i]%2==0 && freq[nums[i]]==1)
        {
            return nums[i];
        }
     }

     return -1;  
}
