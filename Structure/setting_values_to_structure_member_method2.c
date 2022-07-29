#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    char name[20];
    char course[12];
    int r_no;
    float per;
};
int main()
{
    struct student std1={"Shraddha","Engineering",143,90.66};

    printf("Student name = %s\n",std1.name);
    printf("course       = %s\n",std1.course);
    printf("Roll no      = %d\n",std1.r_no);
    printf("Percentage   = %0.2f\n",std1.per);

    getch();
    return 0;

}
