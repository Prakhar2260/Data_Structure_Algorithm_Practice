char* replaceDigits(char* s)
 {
   int n =strlen(s);

    char* res =(char*)malloc(n + 1);
    strcpy(res,s);

    for (int i = 1;i<n;i=i + 2)
     {
        res[i]=res[i-1]+(res[i]-'0');
    }

    return res;
}
