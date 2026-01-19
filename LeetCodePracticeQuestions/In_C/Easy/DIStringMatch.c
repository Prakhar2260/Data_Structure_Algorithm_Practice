/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* diStringMatch(char* s, int* returnSize)
{
    int len=strlen(s);

    int *result=(int*)malloc(sizeof(int)*(len+1));
    
    int low=0;
    int high=len;
 
    int index=0;

    for(int i=0;i<len;i++)
     {
        if(s[i]=='I')
          {
           result[index]=low++;
          }

         else
         {
           result[index]=high--;
         }  

          index++;  
     }

      result[len]=low;

     *returnSize=len+1;

     return result;

    
}
