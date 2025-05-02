

#include<stdio.h>
float rahim(float a,float b)
{
    return (0.5)*a*b;
}
int main()
{
   float a,b,T;

    printf("Enter any values:\n");
    scanf("%f%f",&a,&b);
    T=rahim(a,b);
    printf("Triangle=%.2f\n",T);
    return 0;
}
