
#include<stdio.h>
int main()
{
    char country[20];
    printf("Enter a string:\n");
    scanf("%[^\n]",country);
    for(int i=9; i>=0; i--)
    {
        for(int j=0; j<=i; j++){
         printf("%c",country[j]);

        }
        printf("\n");
    }


    return 0;
}
