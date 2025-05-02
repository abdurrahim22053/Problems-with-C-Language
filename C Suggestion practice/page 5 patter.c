#include<stdio.h>
int main()
{
    char ict[20];
    printf("Enter a string:\n");
    scanf("%[^\n]",ict);
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<=i; j++){
         printf("%c",ict[j]);

        }
        printf("\n");
    }


    return 0;
}
