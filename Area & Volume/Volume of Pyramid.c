
#include<stdio.h>
float rahim(float a,float b)
{
    return (1.0/3)*a*b;
}
int main()
{
   float a,b,R;

    printf("Enter any values:\n");
    scanf("%f%f",&a,&b);
    R=rahim(a,b);
    printf("Volume of Pyramid=%.2f\n",R);
    return 0;
}
