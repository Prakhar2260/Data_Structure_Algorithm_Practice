bool canBeEqual(char* s1, char* s2)
{
   for(int i=0;s1[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        { 
        for(int j=2;s2[j]!='\0';j++)
         {
           if(j-i==2 && s1[i]==s2[j])
            {
               char ch=s2[i];
               s2[i]=s2[j];
               s2[j]=ch;
            }
         }
        }
    }

    for(int i=0;i<4;i++)
     {
        if(s1[i]!=s2[i])
         {
            return false;
         }
     } 

     return true;
    
}
