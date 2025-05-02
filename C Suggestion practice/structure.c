#include<stdio.h>
struct student
{
    char name[20];
    int roll_no;
    float marks;
};
int main()
{
    struct student student1;
    printf("Enter inforfatiom for student1:\n");
    gets(student1.name);
    scanf("%d",&student1.roll_no);
    scanf("%f",&student1.marks);
    printf("student1:\n");
    printf("%s\n",student1.name);
    printf("%d\n",student1.roll_no);
    printf("%.2f\n",student1.marks);



    return 0;
}
