int findShortestSubArray(int* nums, int numsSize)
{
    if(numsSize==1)
      return 1;

    int freq[50001]={0};
     int firstO[50001];
     int lastO[50001];

    for(int i=0;i<numsSize;i++)
     {
        freq[nums[i]]++;
     }

     int maxFrq=0;

     for(int i=0;i<50001;i++)
      {
          firstO[i]=-1;
           lastO[i]=-1;
           
        if(maxFrq<freq[i])
         {
            maxFrq=freq[i];
         }
      }

     for(int i=0;i<numsSize;i++)
     {
        if(firstO[nums[i]]==-1)
         {
            firstO[nums[i]]=i;
         }

          lastO[nums[i]]=i;
     }

      int val=50000;

      for(int i=0;i<numsSize;i++)
       {
         if(freq[nums[i]]==maxFrq)
          {
            int dist=lastO[nums[i]] - firstO[nums[i]] ;
            if(val>dist)
             {
                val=dist;
             }
          } 
       }

     return val+1;
    
}
