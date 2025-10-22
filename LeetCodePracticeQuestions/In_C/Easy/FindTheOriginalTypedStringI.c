int possibleStringCount(char* word) 
{
  int len=strlen(word);
   
  int total=1;

  int i=0;

  while(i<len)
    {
      char ch=word[i];

      int count=0;

      while(ch==word[i] && i<len)
        {
          count++;
          i++;  
        }

      if(count>1)
        total=total+count-1;  
    } 

    return total;
    
}
