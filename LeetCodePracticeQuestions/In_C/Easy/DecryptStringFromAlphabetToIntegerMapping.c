char* freqAlphabets(char* s) 
{
   char *st=(char*)malloc(sizeof(char)*1000);
   int len=strlen(s);
   
   int index=0;

   for(int i=0;i<len;i++)
    {    
        if(i+2 < len && s[i+2]=='#')
         {
            int ch=(s[i]-'0')*10 + (s[i+1]-'0');
            char c=ch+96;
            st[index++]=c;
            
             
             i=i+2;

         }
        

        else
         {
            int ch=s[i]-'0';
            char c=96+ch;

            st[index++]=c;
         } 
    } 

    st[index]='\0';

    return st;
    
}
