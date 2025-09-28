int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}


int largestPerimeter(int* nums, int numsSize) 
{
  int len=numsSize;

  qsort(nums, len, sizeof(int), compare);
  int perimeter=0;


 for(int i=len-1;i>=2;i--)
 {
  int side1=nums[i];
  int side2=nums[i-1];
  int side3=nums[i-2];

  if(side1<side2+side3)
    {
      int newperimeter=side1+side2+side3;  
      if(newperimeter>perimeter)
        {
          perimeter=newperimeter;  
        }  
    } 
 }

    return perimeter;
}
