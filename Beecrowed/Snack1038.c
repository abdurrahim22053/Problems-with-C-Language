
#include<stdio.h>
int main(){
int x,y;
scanf("%d%d",&x,&y);
if(x==1){
    float p1=4.00*y;
    printf("Total: R$ %.2f\n",p1);
}
if(x==2){
    float p2=4.50*y;
    printf("Total: R$ %.2f\n",p2);
}
if(x==3){
    float p3=5.00*y;
    printf("Total: R$ %.2f\n",p3);
}
if(x==4){
    float p4=2.00*y;
    printf("Total: R$ %.2f\n",p4);
}
if(x==5){
    float p5=1.5*y;
    printf("Total: R$ %.2f\n",p5);
}
return 0;
}


