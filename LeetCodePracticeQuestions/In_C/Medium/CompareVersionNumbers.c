char *substring(int start,int end,char *ar)
{
  int length=end-start;
  char* A=malloc(length+1);
  for(int i=0;i<length;i++)
     {
      A[i]=ar[start+i];  
     }  
   A[length]='\0';  
 
 return A;
}




int compareVersion(char* version1, char* version2) 
{
 int len1=strlen(version1);
 int len2=strlen(version2);

  char ch1;
  int count=0;
  long ver1[1000];
  int index1=0;
 for(int i=0;i<=len1;i++)
    {
    ch1=version1[i]; 

    if (ch1== '.' ||ch1== '\0')
     {
      char *str=substring(count,i,version1);  
      char *endptr1;  
      long num1=strtol(str,&endptr1,10); 
      ver1[index1]=num1;
      index1++;
      free(str);
      count=i+1; 
     }

    }

  count=0;
  long ver2[1000];
  int index2=0;
 for(int i=0;i<=len2;i++)
    {
    ch1=version2[i]; 

    if(ch1== '.' || ch1 == '\0')
     {
      char *str=substring(count,i,version2);  
      char *endptr1;  
      long num1=strtol(str,&endptr1,10); 
      ver2[index2]=num1;
      index2++;
      free(str);
      count=i+1; 
     }

    }

     int largelength = (index1 > index2) ? index1 : index2;
     for (int i = index1; i < largelength; i++) ver1[i] = 0;
     for (int i = index2; i < largelength; i++) ver2[i] = 0;

    

       for(int i = 0; i < largelength; i++) 
       {
        if (ver1[i] > ver2[i]) return 1;
        if (ver1[i] < ver2[i]) return -1;
       }

       return 0;
    
}
