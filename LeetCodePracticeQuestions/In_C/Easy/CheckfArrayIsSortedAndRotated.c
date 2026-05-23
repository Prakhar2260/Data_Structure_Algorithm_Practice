
bool IsRotated(int *arr,int n)
{
   int count=0;

    for(int i=0;i<n;i++)
     {
         if(arr[i]>arr[(i+1)%n])
          {
            count++;
          }
    }

    return count<=1;
}


bool check(int* nums, int numsSize)
{
    if(!IsRotated(nums,numsSize))
      return false;  
      
     return true;  
}
