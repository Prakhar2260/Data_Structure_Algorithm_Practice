int findNumbers(int* nums, int numsSize) 
{
  int count=0;  
  for(int i=0;i<numsSize;i++)
    {
      int digit=0;
      int num=nums[i];

      while(num>0)
         {
          digit++;
          num=num/10;  
         }

       if(digit%2==0)
          count++;    

    }

    return count;  
    
}
