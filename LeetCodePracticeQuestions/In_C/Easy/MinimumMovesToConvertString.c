int minimumMoves(char* s)
{
    int oper=0;
    int i=0;
    int l=strlen(s);

    while(i<l)
    {
        if(s[i]=='X')
        {
            oper++;
            i=i+3;  
        }
        else
        {
            i++;
        }
    }

    return oper;
}
