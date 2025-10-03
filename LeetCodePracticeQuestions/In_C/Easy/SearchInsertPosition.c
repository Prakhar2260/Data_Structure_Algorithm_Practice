int searchInsert(int* nums, int numsSize, int target) 
{
  int min=0;
  int max=numsSize-1;
  int mid=(min+max)/2;

  while(max>=min)
   {
    if(nums[mid]==target)
    {
      return mid;
    }

    else if(nums[mid]<target)
      {
        min=mid+1;
      }
   
     else if(nums[mid]>target)
      {
        max=mid-1;
      }

    mid=(max+min)/2;
   }
 
      return min;    
}
