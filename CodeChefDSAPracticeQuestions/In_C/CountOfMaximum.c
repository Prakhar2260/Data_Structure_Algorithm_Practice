void mostFrequent(int arr[], int n, int *val, int *freq) 
{
    // write your code here
    
    int count[10001]={0};
    
    for(int i=0;i<n;i++)
     {
         count[arr[i]]++;
     }
     
     int maxTimes=0;
     int value=10001;
     
     for(int i=1;i<10001;i++)
      {
          if(count[i]>maxTimes)
           {
               maxTimes=count[i];
               value=i;
           }
      }
      
      *val=value;
    *freq=maxTimes;
}
