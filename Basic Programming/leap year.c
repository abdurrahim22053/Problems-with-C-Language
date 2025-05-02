#include<stdio.h>
int main(){
int i=1,f,c=0;
printf("Enter the starting number:\n");
scanf("%d",&i);
printf("Enter the ending number:\n");
scanf("%d",&f);
while(i<=f)
{
    if(i%2==0)
        c=c+1;

    i=i+1;
}
printf("The total even number is=%d\n",c);
return 0;

}
