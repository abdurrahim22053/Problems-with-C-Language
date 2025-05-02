
#include<stdio.h>
int main()
{
    int h,m,n,temp;
    scanf("%d",&n);
    temp=n;
    h=temp/3600;
    m=(temp-h*3600)/60;
    temp=temp%60;

    printf("%d:%d:%d\n",h,m,temp);

    return 0;
}
