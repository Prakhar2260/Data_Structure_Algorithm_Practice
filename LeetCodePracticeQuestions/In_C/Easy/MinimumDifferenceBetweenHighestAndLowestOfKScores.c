int cmp(const void* a,const void* b)
{
    return (*(int*)a-*(int*)b);
}




int minimumDifference(int* nums, int numsSize, int k) 
{

    qsort(nums,numsSize,sizeof(int),cmp);

    if(k==1)
      return 0;

     int minimum=1000000000;

    for (int i=0;i+k-1<numsSize;i++)
    {
        int diff=nums[i+k-1]-nums[i];
        if (diff<minimum)
            minimum=diff;
    }

    return minimum;

}
