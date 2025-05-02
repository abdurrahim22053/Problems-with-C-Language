#include<stdio.h>
int rahimgcd(int n1,int n2)
{
    while(n2!=0)
    {
        int rem=n1%n2;
        n1=n2;
        n2=rem;
    }

    return n1;
}
int rahimlcm(int n1,int n2)
{
    int gcd=rahimgcd(n1,n2);
    int lcm=(n1*n2)/gcd;
    return lcm;
}
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int gcd=rahimgcd(n1,n2);
    int lcm=rahimlcm(n1,n2);
    printf("GCD=%d\n",gcd);
    printf("LCM=%d",lcm);
    return 0;
}

