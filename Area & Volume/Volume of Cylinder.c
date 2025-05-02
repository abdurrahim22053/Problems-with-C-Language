
#include<stdio.h>
float rahim(float a,float b)
{
    return (3.1416)*a*a*b;
}
int main()
{
   float a,b,R;

    printf("Enter any values:\n");
    scanf("%f%f",&a,&b);
    R=rahim(a,b);
    printf("Volume of Cylinder=%.2f\n",R);
    return 0;
}

