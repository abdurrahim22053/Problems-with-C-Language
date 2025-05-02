#include<stdio.h>
#include<string.h>
int main()
{
    char ori[200],rev[200];
    int i,j,d;
    scanf("%s",ori);
    int l=strlen(ori);
    for(j=0,i=l-1; i>=0; j++,i--)
    {
        rev[j]=ori[i];
    }
    //rev[j]!='\0';
    // printf("\n%s",ori);
    //printf("\n%s",rev);
    d=strcmp(ori,rev);

    if(d==0)
        printf("Palindrome");
    else printf("Notpalindrome");
    return 0;
}
