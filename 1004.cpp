//
// Created by kelvin on 17-5-30.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

typedef struct student * prtstudent;

struct student
{
    char name[11];
    char student_num[11];
    int mark; //成绩
};

int main()
{
    int num, i, flag = 0;
    char name[11],student_num[11];
    int mark;
    scanf("%d",&num);
    prtstudent max;
    prtstudent min;
    min = (prtstudent)malloc(sizeof(struct student));
    max = (prtstudent)malloc(sizeof(struct student));
    for(i = 0; i < num; i++) {
       scanf("%s%s%d",name,student_num,&mark);
       if (!flag) {
           strcpy(max->name,name);
           strcpy(max->student_num,student_num);
           max->mark = mark;
           strcpy(min->name,name);
           strcpy(min->student_num,student_num);
           min->mark = mark;
           flag++;
       } else {
           if (mark > max->mark) {
               strcpy(max->name,name);
               strcpy(max->student_num,student_num);
               max->mark = mark;
           } else if (mark < min->mark) {
               strcpy(min->name,name);
               strcpy(min->student_num,student_num);
               min->mark = mark;
           }
       }
    }
    printf("%s %s",max->name,max->student_num);
    printf("\n");
    printf("%s %s",min->name,min->student_num);
    return 0;
}
