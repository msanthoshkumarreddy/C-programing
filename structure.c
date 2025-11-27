#include<stdio.h>
struct student{
char stuName[50];
char RollNo[20];
char Section[10];
char Address[20];
int marks;
};
void main(){
struct student s1={"santhosh","25kq1a54c1","B ","Ongole",99};
printf("Student Name:%s\n",s1.stuName);
printf("Roll No:%s\n",s1.RollNo);
printf("Section:%s\n",s1.Section);
printf("Address:%s\n",s1.Address);
printf("Marks:%d",s1.marks);
}
