

#include<stdio.h>
float rahim(float a)
{
    return a*a;
}
int main()
{
   float a,S;

    printf("Enter any values:\n");
    scanf("%f",&a);
    S=rahim(a);
    printf("Square=%.2f\n",S);
    return 0;
}
