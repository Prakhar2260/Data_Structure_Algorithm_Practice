char* trimTrailingVowels(char* s) 
{
    int len=strlen(s);
    
    while (len > 0 &&
          (s[len-1] == 'a' || s[len-1] == 'e' ||
           s[len-1] == 'i' || s[len-1] == 'o' ||
           s[len-1] == 'u')) {
        len--;
    }
    
    char* result=(char*)malloc((len+1)*sizeof(char));
    
    strncpy(result,s,len);
    
    result[len] = '\0';
    
    return result;
}
    
