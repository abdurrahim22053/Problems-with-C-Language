
#include <stdio.h>
int rahim(int a, int b)
{
    while (b != 0)
    {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}
int main()
{
    int num1, num2;
    scanf("%d%d", &num1,&num2);
    int sum = rahim(num1, num2);


    printf("Sum=%d\n", sum);

    return 0;
}
