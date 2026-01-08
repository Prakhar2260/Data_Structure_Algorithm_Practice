#include <stdio.h>
#include <math.h>

int main() 
{
    int T;
    scanf("%d",&T);

    while(T--) 
    {
        int N,V1,V2;
        
        scanf("%d %d %d",&N,&V1,&V2);

        double stairsTime=(N*sqrt(2))/V1;
        double elevatorTime=(2.0*N)/V2;

        if (elevatorTime<stairsTime)
            printf("Elevator\n");
            
        else
            printf("Stairs\n");
    }

    return 0;
}
