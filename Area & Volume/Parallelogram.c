

#include<stdio.h>
float rahim(float b,float h)
{
    return b*h;
}
int main()
{
   float base,vertical_height,R;

    printf("Enter any values:\n");
    scanf("%f%f",&base,&vertical_height);
    R=rahim(base,vertical_height);
    printf("Parallelogram=%.2f\n",R);
    return 0;
}
