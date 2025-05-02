#include<stdio.h>
int main(){
int c,j,s;
scanf("%d%d",&c,&j);
s=c-j;
if(s>3)
    printf("Eligible for bonous");
else
    printf("Not eligible");

return 0;
}
