
#include<stdio.h>
int main(){
int n,row,col;
printf("Enter the number of n=");
scanf("%d",&n);
for(row=1;row<=n;row++){
    for(col=1;col<=n;col++){
        printf("@",col);
    }
    printf("\n");
}
return 0;
}
