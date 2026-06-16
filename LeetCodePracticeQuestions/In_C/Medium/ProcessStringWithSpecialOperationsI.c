char* processStr(char* s)
{
   char *res=(char*)malloc(7463829*sizeof(char));

   int index=0;
   int len=strlen(s);
   
   for(int i=0;i<len;i++)
    {
        if(s[i]>='a' && s[i]<='z')
         {
            res[index++]=s[i];
         }

         else if(s[i]=='*' && index>0)
          {
            index--;
          }

         else if(s[i]=='#')
         {
           int currlen=index;

           for(int j=0;j<currlen;j++)
            {
              res[index+j]=res[j];
            }

            index=index*2; 
         } 

         else if(s[i]=='%')
          {
             for(int left=0,right=index-1 ; left<right ;left++,right--)
              {
                char temp=res[left];
                res[left]=res[right];
                res[right]=temp;
              }
          }
    }

    res[index]='\0';

    return res;

    
}
