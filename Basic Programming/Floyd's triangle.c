#include<stdio.h>
int main()
{
    int row,col,n,count =1;
    printf("Enter the number of n=");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(int sp=1; sp<=n-row; sp++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("%d ",count++);
        }
        printf("\n");
    }
    return 0;


}
