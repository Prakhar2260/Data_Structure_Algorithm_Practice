#include <stdio.h>

int main()
{
    int n,k,l,c,d,p,nl,np;
    
    scanf("%d %d %d %d %d %d %d %d",
          &n,&k,&l,&c,&d,&p,&nl,&np);
    
    int drink_toasts=(k*l)/nl;
    int lime_toasts=c*d;
    int salt_toasts=p/np;
    
    int total_toasts=drink_toasts;
    
    if(lime_toasts<total_toasts)
        total_toasts = lime_toasts;
        
    if(salt_toasts<total_toasts)
        total_toasts= salt_toasts;
    
    printf("%d\n",total_toasts/n);
    
    return 0;
}
