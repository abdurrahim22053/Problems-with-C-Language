#include<stdio.h>
#include<stdlib.h>
int main()
{
    int rahim[1000],count=0;
    for(int i=0; i<1000; i++)
    {
        rahim[i]=48+(rand()%(1024-48+1));
    }
    for(int i=0; i<1000; i++)
    {
        if(rahim[i]%6==0)
        count++;
    }

    printf("result=%d",count);


    return 0;
}
