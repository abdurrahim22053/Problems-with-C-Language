#include<stdio.h>
int main()
{
    char str[1000],ch,i=0,word=0;
    gets(str);
    while((ch=str[i])!='\0')
    {
        if(ch==' ')
            word++;
        i++;
    }
    word++;
    printf("%d",word);
    return 0;
}



