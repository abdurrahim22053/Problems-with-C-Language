
#include<stdio.h>
int main()
{
    int a,b,c,large;
    scanf ("%d%d%d",&a,&b,&c);
    large=a;
    if(b>a&&b>c)
    {
        large=b;
    }
    else if(c>a&&c>b)
    {
        large=c;
    }
    printf("%d eh o maior\n",large);

    return 0;
}

