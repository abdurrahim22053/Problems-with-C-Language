#include<stdio.h>
int rightshift(int num){
return num>>2;
}
int leftshift(int num){
return num<<2;
}
int main(){
int num;
scanf("%d",&num);
printf("After 2 bits right shift:%d\n",rightshift(num));
printf("After 2 bits left shift:%d\n",leftshift(num));
}



