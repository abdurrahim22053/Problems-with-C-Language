
#include<stdio.h>
float rahim(float a)
{
    return (4.0/3)*(3.1416)*a*a*a;
}
int main()
{
   float a,R;

    printf("Enter any values:\n");
    scanf("%f",&a);
    R=rahim(a);
    printf("Volume of Sphere=%.2f\n",R);
    return 0;
}
