int passwordStrength(char* password) 
{
int freq[200]={0};

  for(int i=0;password[i]!='\0';i++)
   {
    freq[password[i]]++;
   }


    int score=0;

    for(int i=0;password[i]!='\0';i++)
    {
        char ch=password[i];

       if(freq[ch]>0)
       {
        if(ch>='a' && ch<='z')
          score++;

        else if(ch>='A' && ch<='Z')
        score=score+2;

        else if(ch>='0' && ch<='9')
         score=score+3;

         else
         score=score+5;  

          freq[ch]=0;
       }  
    }

    return score;
    
}
