#include<stdio.h>
int main()
{
    /*int i= 4, j=-1,k=0,w,x,y,z;
    w=i||j||k;
    x=i&&j&&k;
    y=i||j&&k;
    z=i&&j||k;
    printf("\nw=%d x=%d y=%d z=%d",w,x,y,z);*/
    int i= 4, j=-1,k=0,y,z;
    y=i+5&&j+1||+2;
    z=i+5||j+1&&k+2;
    printf("\ny =%d z=%d",y,z);
    return 0;
}
