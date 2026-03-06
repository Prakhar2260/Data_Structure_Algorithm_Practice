bool checkOnesSegment(char* s) 
{
    int group=0;
    int start=0;

    for(int i=0;s[i]!='\0';i++)
       {
         if(s[i]=='1')
           {
            start++;

            if(start==1)
              group++;  
           }

         else
          {
            start=0;
          }

       }

       if(group>1)
         return false;

        return true; 
    
}
