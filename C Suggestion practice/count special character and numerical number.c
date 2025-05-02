#include<stdio.h>
int main()
{
    char str[200],ch;
    gets(str);
    int special=0,numerical=0,alphabet=0,space=0;
    int i=0;
    while((ch=str[i])!='\0')
    {
        if(ch>='0'&&ch<='9')
            numerical++;
        else if((ch>='a'&&ch<='z')||(ch>='A'&& ch<='Z'))
            alphabet++;
        else if(ch==' ')
        space++;
        else
            special++;
            i++;
    }
    printf("%d %d",numerical,special);
    return 0;
}




