char findTheDifference(char* s, char* t) 
{
    char ans = 0;
    int i=0;
    
    while(s[i]!='\0') {
        ans^=s[i];
        i++;
    }
    
    i=0;
    while(t[i]!='\0') {
        ans^=t[i];
        i++;
    }
    
    return ans;
    
}
