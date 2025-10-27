#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) 
    {
        int n;
        scanf("%d", &n);
        
        int a[n], b[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }
        
        int count1=0;
        int count2=0;
        
        int max1=0;
        int max2=0;
        
        for(int i=0;i<n;i++)
         {
             if (a[i] > 0)
             count1++;
             
            else
            count1 = 0;
            
            if (count1 > max1)
            max1 = count1;
             
         }
        
        
        for(int i=0;i<n;i++)
         {
            if(b[i] > 0)
            count2++;
            
            else
            count2=0;
            
            if(count2 > max2)
            max2 = count2; 
            
         }
         
         if(max1>max2)
          {
            printf("OM\n");  
          }
          
         else if(max1<max2)
          {
            printf("ADDY\n");      
          }
          
          else
           {
             printf("DRAW\n");  
           }
    }
    
    return 0;

}
