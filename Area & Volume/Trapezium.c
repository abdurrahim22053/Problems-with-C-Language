#include<stdio.h>
float rahim(float a,float b,float h)
{
    return (0.5)*(a+b)*h;
}
int main()
{
    float a,b,h,Tra;

    printf("Enter any values:\n");
    scanf("%f%f%f",&a,&b,&h);
    Tra=rahim(a,b,h);
    printf("Trapezium=%.2f\n",Tra);
    return 0;
}
