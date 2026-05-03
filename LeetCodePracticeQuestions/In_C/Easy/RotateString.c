bool rotateString(char* s, char* goal)
{
    int n1=strlen(s);
    int n2=strlen(goal);

    if(n1!=n2)
        return false;


    char *temp=(char*)malloc((2*n1+1)*sizeof(char));

    strcpy(temp,s);
    strcat(temp,s);

    bool result=(strstr(temp,goal)!=NULL);

    free(temp);
    return result;
}
    
