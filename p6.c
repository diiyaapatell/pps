#include<stdio.h>
#include<string.h>
#define MAX 100
struct student
{
int rollNo;
char name[100];
char grade;
float marks;
};
int main()
{
int i,n;
printf("Enter No. of student: ");
scanf("%d", &n);
struct student s[n];
for(i=0;i<n;i++)
{
printf("\n Enter details of student %d:\n",i+1);
printf("Enter name: ");
scanf(" %[^\n]", s[i].name);
printf("\nEnter roll no.: ");
scanf("%d", &s[i].rollNo);
printf("\nEnter grade: ");
scanf(" %c", &s[i].grade);
printf("\nEnter marks: ");
scanf("%f", &s[i].marks);
}
printf("\n---Student Records---\n");
for(i=0;i<n;i++)
{
printf("\n student %d:\n",i+1);
printf("Name: %s\n",s[i].name);
printf("Roll No.: %d\n",s[i].rollNo);
printf("Marks: %.2f\n",s[i].marks);
}
return 0;
}






