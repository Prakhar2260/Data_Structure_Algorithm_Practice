# include <stdio.h>

int cmp(void const*a,void const *b)
 {
    return (*(int*)a - *(int*)b);
 }

int main()
{
    int x1,x2,x3;
    scanf("%d %d %d",&x1,&x2,&x3);

    int ar[3];
    ar[0]=x1;
    ar[1]=x2;       
    ar[2]=x3;

    qsort(ar,3,sizeof(int),cmp);

    printf("%d\n",(ar[2]-ar[1]) + (ar[1]-ar[0]) );

    return 0;
}
