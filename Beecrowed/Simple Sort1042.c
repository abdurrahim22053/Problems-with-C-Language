

#include<stdio.h>
int main(){
int ar[3],br[3],i,temp;
for (i=0;i<3;i++){
    scanf("%d",&ar[i]);
}
    for(int i=0;i<3;i++){
        br[i]=ar[i];
    }
for(i=0;i<3;i++){
    for(int j=i+1;j<3;j++){
        if(ar[i]>ar[j]){
            temp=ar[i];
        ar[i]=ar[j];
        ar[j]=temp;
        }
    }
}
for(i=0;i<3;i++){
    printf("%d\n",ar[i]);
}

printf("\n");
for(int i=0;i<3;i++){
    printf("%d\n",br[i]);
}

return 0;
}
