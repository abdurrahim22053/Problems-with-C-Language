
#include<stdio.h>
int main()
{
    double a,b,c,A,B,C,temp;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(a<c)
    {
        temp=a;
        a=c;
        c=temp;
    }
    if(b<c)
    {
        temp=b;
        b=c;
        c=temp;
    }

    A=a*a;
    B=b*b;
    C=c*c;


    if(a>=(b+c))
        printf("NAO FORMA TRIANGULO\n");
    else
    {
        if(A==B+C)
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if(A>B+C)
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (A<B+C)
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(a==b&&b==c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
       else if(a==b||a==c||b==c)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
