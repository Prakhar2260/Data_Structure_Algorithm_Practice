bool isSubsequence(char* s, char* t) 
{
      int i,j;
        for(i=0 , j=0 ; s[i]!='\0' && t[j]!='\0'; j++)
          {
            if(s[i]==t[j])
              i++;
          }

          if(s[i]=='\0')
               return true;  

         return false;
}
