#include<stdio.h>
int main(){
int n,rem,sum=0;
printf(" Enter the value of n=\n");
scanf("%d",&n);

while(n>0)
    {
    rem=n%10;
    sum=sum+rem;
    n=n/10;
}
printf("The summation of these digits=%d\n",sum);
return 0;
}
