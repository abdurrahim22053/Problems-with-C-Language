
#include<stdio.h>
int main()
{
    int a1[7]= {100,50,20,10,5,2,1};
    int a2[7];
    int n,i,j;
    scanf("%d",&n);
    printf("%d\n",n);
    for(i=0; i<7; i++)
    {
        a2[i]=n/a1[i];
        n=n%a1[i];

    }
    for(j=0; j<7; j++)
    {
        printf("%d nota(s) de R$ %d,00\n",a2[j],a1[j]);
    }

    return 0;
}
