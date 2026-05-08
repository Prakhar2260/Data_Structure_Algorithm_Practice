bool isPalindrome(char* s) 
{
    int len=strlen(s);
    char str[len+1];

    int index=0;

    for(int i=0;s[i]!='\0';i++)
     {
        if(isalnum(s[i]))
         {
            if(isupper(s[i]))
            str[index++]=s[i]+32;
             
            else 
            str[index++]=s[i];
         }
     }

     str[index]='\0';

     for(int i=0,j=index-1;i<index/2;i++,j--)
      {
        if(str[i]!=str[j])
         {
            return false;
         }
      }
    
    return true;
}
