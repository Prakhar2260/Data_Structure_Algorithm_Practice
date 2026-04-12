char* trafficSignal(int timer)
{
    char *str1="Green";
    char *str2="Orange";
    char *str3="Red";
    char *str4="Invalid";

    if(timer==0)
     return str1;

    else if(timer==30)
     return str2;

    else if(30<timer && timer<=90) 
     return str3;

    else
     return str4;  
    
}
