int vowelConsonantScore(char* s)
{
    int c=0,v=0;

    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
       if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
         v++;

        else if(s[i]==' ')
         continue;

        else if(isdigit(s[i]))
         continue;

         else
          c++; 
    }

    if(c==0)
      return 0;

    return v/c;  

    
}
