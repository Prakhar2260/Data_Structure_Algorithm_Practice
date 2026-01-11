int minOperations(int* nums, int numsSize)
{
    int freq[100001];
    for(int i=0;i<100001;i++)
      freq[i]=0;

    for(int j=0;j<numsSize;j++)
        freq[nums[j]]++;

    int dupCount = 0;
    for (int v = 1; v <= 100000; v++)
     {
        if (freq[v] >= 2)
            dupCount++;
     }       

    int operations=0;
    int index=0;
    
     while(index<numsSize && dupCount>0)
       { 
           operations++;

           for (int k = 0; k < 3 && index < numsSize; k++)
            {
              int val = nums[index];
            if(freq[val] == 2)
                dupCount--;

            freq[val]--;
            index++;
            }
       }

     return operations;    
}
