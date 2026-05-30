bool hasDuplicate(int nums[], int n)
{
    // write your code here 
    
    int freq[101]={0};
    
    for(int i=0;i<n;i++)
     {
         freq[nums[i]]++;
     }
     
     for(int i=0;i<101;i++)
      {
          if(freq[i]>1)
           return true;
      }
      
      return false;
    
}
