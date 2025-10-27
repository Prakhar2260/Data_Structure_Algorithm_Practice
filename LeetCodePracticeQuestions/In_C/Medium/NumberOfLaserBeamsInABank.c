int numberOfBeams(char** bank, int bankSize) 
{
 int len=bankSize;

 int ar[len];
 int index=0;

 for(int i=0;i<len;i++)
  {
    char *str=bank[i];
    int one=0;
    for(int j=0;str[j]!='\0';j++)
      {
       if(str[j]=='1')
         {
          one++;  
         }
      }

      if(one!=0)
      {
       ar[index]=one;
       index++;
      }
  }

     if(len>index)
       {
        int left=len-index;
        int pos=len-left;

        for(int i=pos;i<len;i++)
          {
           ar[i]=-1; 
          }
       }


       int mul=0;

       for(int i=0;i<len-1;i++)
         {
            if(ar[i]!=-1 && ar[i+1]!=-1)
             {
               mul=mul+ar[i]*ar[i+1]; 
             }
         }

        
     return mul;
    
}
