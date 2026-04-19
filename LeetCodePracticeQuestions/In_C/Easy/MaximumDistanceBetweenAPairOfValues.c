int maxDistance(int* nums1, int nums1Size, int* nums2, int nums2Size) 
{
      int i=0,j=0,ans=0;
      int n1=nums1Size;
      int n2=nums2Size;

     while(i<n1 && j<n2)
      {
         if (nums1[i]<=nums2[j])
          {
            if(j-i>ans)
                ans=j-i;
            j++;
        } 

        else
         {
            i++;
           }
    }

    return ans;
    
}
