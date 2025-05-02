#include<stdio.h>
int main(){
int a,b;
scanf("%d %d",&a,&b);
int sum,mul,diff,div,mod;
sum=a+b;
mul=a*b;
diff=a-b;
float div;
div=(float)a/b;
mod=a%b;
printf("sum=%d\n",sum);
printf("mul=%d\n",mul);
printf("diff=%d\n",diff);
printf("div=%f\n",div);
printf("mod=%d\n",mod);

return 0;
}
