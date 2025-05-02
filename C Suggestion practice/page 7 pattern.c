
#include<stdio.h>
int main()
{
    int counter1,counter2;
    for(counter1=1; counter1<=4; counter1++)
    {
        for(counter2=4; counter2>=1; counter2--)
        {
            printf("%d",counter2);
        }
        printf("\n");
    }
    return 0;
}
