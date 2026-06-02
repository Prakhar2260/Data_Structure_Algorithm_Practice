const char* isMinHeap(int A[], int N) 
{
    // write your code here
    
    for(int i=0;i<N;i++)
    {
     int leftchild=2*i +1;
     int rightchild=2*i +2;
     
     if(leftchild < N )
      {
          if(A[i]>A[leftchild])
           {
               return "No";
           }
      }
      
      if(rightchild<N)
       {
           if(A[i]>A[rightchild])
            {
                return "No";
            }
       }
     
    } 
    
    return "Yes";
    
}
