

#include<stdio.h>
float rahim(float a)
{
    return (3.1416)*a*a;
}
int main()
{
   float a,C;

    printf("Enter any values:\n");
    scanf("%f",&a);
    C=rahim(a);
    printf("Circle=%.2f\n",C);
    return 0;
}
