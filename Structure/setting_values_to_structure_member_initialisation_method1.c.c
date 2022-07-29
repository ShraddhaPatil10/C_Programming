#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    char name[20];
    int r_no;
    char course[12];
    float per;
};

int main()
{
    struct student std1;

    std1.r_no=1;
    strcpy(std1.name,"Harry Potter");
    strcpy(std1.course,"B.S.C");
    std1.per=90.66;

    printf("Press any key to continue!!!\n\n");
    getch();

    printf("The student details are as follows:\n");
    printf("Student name    = %s\n",std1.name);
    printf("Student Roll no = %d\n",std1.r_no);
    printf("Course          = %s\n",std1.course);
    printf("Percentage      = %f\n",std1.per);
}
