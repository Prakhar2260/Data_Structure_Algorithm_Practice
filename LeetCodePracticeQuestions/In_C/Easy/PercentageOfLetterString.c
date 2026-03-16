int percentageLetter(char* s, char letter) 
{
   int same=0;
   int len=strlen(s);

   for(int i=0;s[i]!='\0';i++)
     {
        if(s[i]==letter)
         {
            same++;
         }
     } 

  return same * 100 / len; 


}
