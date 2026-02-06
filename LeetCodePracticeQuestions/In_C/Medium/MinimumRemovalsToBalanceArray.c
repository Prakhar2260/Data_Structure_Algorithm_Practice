int cmp(const void *a, const void *b) 
{
    int x = *(int*)a;
    int y = *(int*)b;
    return (x > y) - (x < y);
}


int minRemoval(int* nums, int numsSize, int k)
 {
    qsort(nums,numsSize,sizeof(int),cmp);

    int l=0;
    int maxLen=1;

    for (int r=0; r<numsSize;r++)
     {
        while ((long long)nums[r]>(long long)nums[l]*k) 
        {
            l++;
        }


        if(r-l+1>maxLen)
            maxLen=r-l+1;
    }

    return numsSize-maxLen;
}
    
