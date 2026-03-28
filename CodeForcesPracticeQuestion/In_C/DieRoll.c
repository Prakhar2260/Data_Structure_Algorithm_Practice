#include <stdio.h>

int gcd(int a,int b) 
{
    while(b!=0) 
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main() 
{
    int Y,W;
    scanf("%d %d",&Y,&W);

    int m=(Y>W)?Y:W;

    int num=7-m;   
    int den=6;       

    int g=gcd(num,den);

    printf("%d/%d\n",num/g,den/g);

    return 0;
}
