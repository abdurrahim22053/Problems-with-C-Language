#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num>=1&&num<25)
    {
        int i,n1=2,n2=3,n3;
        for(i=3; i<=num; i++)
        {
            n3=n1+n2;
            n1=n2;
            n2=n3;
        }
        printf("%d",n3);
    }
    else
        printf("Invalid Inpput");
    return 0;
}
