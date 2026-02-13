int numberOfPairs(int* nums1, int nums1Size, int* nums2, int nums2Size, int k)
 {
     int count=0;

    for(int i=0;i<nums1Size;i++)
    {
        for(int j=0;j<nums2Size;j++)
        {
            int value=nums2[j]*k;

            if(nums1[i]%value==0)
            {
                count++;
            }
        }
    }

    return count;
    
}
