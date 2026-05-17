bool isAdjacentDiffAtMostTwo(char* s)
{
     for(int i=0;s[i+1]!='\0';i++)
      {
        int d1=s[i]-'0';
        int d2=s[i+1]-'0';

        if(abs(d1-d2)>2)
         {
            return false;
         }
    }
    return true;
    
}
