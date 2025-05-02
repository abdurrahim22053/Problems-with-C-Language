#include<stdio.h>
float rahim(float a,float b)
{
    return (3.1416)*a*b;
}
int main()
{
   float a,b,E;

    printf("Enter any values:\n");
    scanf("%f%f",&a,&b);
    E=rahim(a,b);
    printf("Ellipse=%.2f\n",E);
    return 0;
}
