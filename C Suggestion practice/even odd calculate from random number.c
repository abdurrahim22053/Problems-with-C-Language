#include<stdio.h>
#include<stdlib.h>
int main()
{
    int rahim[200],even=0,odd=0;
    for(int i=0; i<200; i++)
    {
        rahim[i]=46+(rand()%(512-46+1));
    }
    for(int i=0; i<200; i++)
    {
        if(rahim[i]%2==0)
            even++;
        else
            odd++;
    }

    printf("Even=%d   Odd=%d",even,odd);


    return 0;
}
