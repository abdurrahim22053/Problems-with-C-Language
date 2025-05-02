#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    float D;
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    D=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    printf("%.3f",D);



    return 0;
}
