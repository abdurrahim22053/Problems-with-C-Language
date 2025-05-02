
#include<stdio.h>
float rahim(float a)
{
    return a*a*a;
}
int main()
{
   float a,R;

    printf("Enter any values:\n");
    scanf("%f",&a);
    R=rahim(a);
    printf("Volume of Cube=%.2f\n",R);
    return 0;
}
