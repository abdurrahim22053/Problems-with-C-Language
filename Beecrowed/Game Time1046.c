

#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        int g1=24-(x-y);
        printf("O JOGO DUROU %d HORA(S)\n",g1);
    }
    else if(x<y)
    {
        int g2=y-x;
        printf("O JOGO DUROU %d HORA(S)\n",g2);
    }
    else if(x==y){
            int g3=24-(x-y);
        printf("O JOGO DUROU %d HORA(S)\n",g3);
    }


    return 0;
}
