
#include<stdio.h>
int main()
{
    double x;
    int n[]= {100,50,20,10,5,2,1},mn[7],c[]= {50,25,10,5,1},a,i,mc[5];
    scanf("%lf",&x);
    a=x;
    for(i=0; i<7; i++)
    {
        mn[i]=a/n[i];
        a=a%n[i];
    }
    a=x*100;
    a=a%100;
    for(i=0; i<5; i++)
    {
        mc[i]=a/c[i];
        a=a%c[i];
    }
    printf("NOTAS:\n");
    for(i=0; i<6; i++)
    {
        printf("%d nota(s) de R$ %d.00\n",mn[i],n[i]);

    }
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ %.2f\n",mn[6],(float)n[6]);
    for(i=0; i<5; i++)
    {
        printf("%d moeda(s) de R$ %.2f\n",mc[i],(float)c[i]/100);
    }

    return 0;
}
