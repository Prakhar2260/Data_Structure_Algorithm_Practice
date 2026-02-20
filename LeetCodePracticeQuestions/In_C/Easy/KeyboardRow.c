/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int Ispresent(char *p,char *s)
{

  for(int i=0;p[i]!='\0';i++)
     {
        int found=0;

        char ch=p[i];

        for(int j=0;s[j]!='\0';j++)
          {
            if(ch==s[j])
              {
                found=1;
                break;
              }
          }

         if(found==0)
           return 0; 
     } 

     return 1; 
}

char** findWords(char** words, int wordsSize, int* returnSize) 
{
   char str1[]="qwertyuiop";
   char str2[]= "asdfghjkl";
   char str3[]="zxcvbnm";

   char **result=malloc(wordsSize*sizeof(char *));

   int index=0;

   for(int i=0;i<wordsSize;i++)
     {
        char *word=words[i];
        
        char temp[101];
        strcpy(temp,word);

        int len=strlen(temp);

        for(int j=0;j<len;j++)
        {
          if(temp[j]>='A' && temp[j]<='Z')
            {
                temp[j]=temp[j]+32;
            }  
        }

        if(Ispresent(temp,str1)||Ispresent(temp,str2)||Ispresent(temp,str3))
         {
            result[index++]=word;
         }
     }   

     *returnSize=index;

     return result;
}
