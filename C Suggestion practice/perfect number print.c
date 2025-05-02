#include<stdio.h>
int main()
{
    int i,num;
    for(num=1; num<=10000; num++)
    {
        int sum=0;
        for(i=1; i<num; i++)
        {
            if(num%i==0)
                sum = sum + i;
        }
        if(sum==num)
            printf("%d\n",sum);

    }
    return 0;
}
