int cmp(char *s1,char *s2)
 {
    int l1=strlen(s1);
    int l2=strlen(s2);

    if(l1!=l2)
     return 0;


    for(int i=0;i<l1;i++)
     {
        if(s1[i]!=s2[i])
          return 0;
     }

     return 1;
 }


char* kthDistinct(char** arr, int arrSize, int k) 
{
    int frq[arrSize];

    for(int i=0;i<arrSize;i++)
     {
        frq[i]=0;

        int count=0;

        for(int j=0;j<arrSize;j++)
         {
            if(cmp(arr[i],arr[j]))
             {
                count++;
             }
         }

         frq[i]=count;
     }

     for(int j=0;j<arrSize;j++)
      {
        if(frq[j]==1)
         {
            k--;

            if(k==0)
             {
                return arr[j];
             }
         }
      }

      return "";
    
}
