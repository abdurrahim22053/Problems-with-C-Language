#include<stdio.h>
int main()
{
    float k,r;
    scanf("%f%f",&k,&r);
    float R=0.8*(k-273);
    float K=(1.25*r)+273;
    printf("%.3f\n",R);
    printf("%.3f\n",K);
    return 0;
}
