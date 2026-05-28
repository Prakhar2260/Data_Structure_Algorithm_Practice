const char* checkPassword(int arr[], int n)
{
    // write your code here 
    
    int sum=0;
    
    for(int i=0;i<n;i++)
     sum=sum+arr[i];
     
     if(sum-n==0)
      return "SECURE";
      
      return "NOT SECURE";
    
}
