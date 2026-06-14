#include <stdio.h>

int main() 
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
    {
        int n;
        scanf("%d",&n);
        
        int arr[n];
        for(int i=0;i<n;i++)
         scanf("%d",&arr[i]);
         
         int pro=1;
         int sum=0;
         
         for(int i=0;i<n;i++)
         {
             pro=pro*arr[i];
             sum+=arr[i];
         }
         
         if(pro==1 && sum>=0)
          {
              printf("0\n");
              continue;
          }
          
          int oper=0;
          
          if(pro==-1)
          {
              pro=1;
           oper++;
           for(int i=0;i<n;i++)
            {
                if(arr[i]==-1)
                 {
                     arr[i]=1;
                     break;
                 }
            }
          } 
          
          sum=0;

         for(int i=0;i<n;i++)
          sum+=arr[i];

           while(sum<0)
          {
            oper++;
            sum+=2;
            pro*=-1;
          }

         if(pro==-1)
         oper++;

         printf("%d\n", oper);
    }
    
    return 0;

}

