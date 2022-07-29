#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    int r_no;
    char name[20];
    char course[12];
    float per;
    char city[12];
};
int main()
{
    struct student std1,std2,std3={3,"Sahil","BBA",89.23,"Kolhapur"};

    //Information of 1st student
    std1.r_no=1;
    strcpy(std1.name,"Aarohi");
    strcpy(std1.course,"MBBS");
    std1.per=99.7948;
    strcpy(std1.city,"Mumbai");

    //Information of 2nd student
    printf("Enter information of 2nd student\n\n");
    printf("Enter roll number=\n");
    scanf("%d",&std2.r_no);

    printf("Enter name of student=\n");
    scanf(" %[^\n]",&std2.name);
    fflush(stdin);

    printf("Enter course=\n");
    scanf(" %[^\n]",&std2.course);
    fflush(stdin);

    printf("Enter percentage=\n");
    scanf("%f",&std2.per);

    printf("Enter city name=\n");
    scanf(" %[^\n]",&std2.city);
    fflush(stdin);

    printf("\nPress any key to continue!!\n");
    getch();
    system("cls");f

    printf("\n\nThe details of students are as follows:\n\n");

    printf("\n1st Student details are as=>\n Roll No=%d\n Student name=%s\n Course=%s\n Percentage=%0.2f\n City=%s\n",std1.r_no,std1.name,std1.course,std1.per,std1.city);

    printf("\n\n2nd Student details are as=>\n Roll No=%d\n Student name=%s\n Course=%s\n Percentage=%0.2f\n City=%s\n",std2.r_no,std2.name,std2.course,std2.per,std2.city);

    printf("\n\n1st Student details are as=>\n Roll No=%d\n Student name=%s\n Course=%s\n Percentage=%0.2f\n City=%s\n",std3.r_no,std3.name,std3.course,std3.per,std3.city);

}


