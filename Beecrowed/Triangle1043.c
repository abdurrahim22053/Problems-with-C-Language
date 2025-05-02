
#include<stdio.h>
int main()
{
    float a,b,c,large;
    scanf("%f%f%f",&a,&b,&c);
    if(a>b&&a>c)
        large=a;
    else if(b>a&&b>c)
        large=b;
    else
        large=c;

    if(a+b>large&&b+c>large&&a+c>large)
    {
        float p=a+b+c;
        printf("Perimetro = %.1f\n",p);
    }
    else
    {
        a=((a+b)*c)/2.0;
        printf("Area = %.1f\n",a);
    }

    return 0;
}
