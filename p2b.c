#include<stdio.h>
int main()
{
int maths, PPS, ETC, FAI, EGD;
int percentage;
printf("**********RESULT**********");
printf("\n ENTER MARKS OF MATH : ");
scanf("%d", &maths);
printf("\n ENTER MARKS OF PPS: ");
scanf("%d", &PPS);
printf("\n ENTER MARKS OF ETC: ");
scanf("%d", &ETC);
printf("\n ENTER MARKS OF FAI: ");
scanf("%d", &FAI);
printf("\n ENTER MARKS OF EGD: ");
scanf("%d", &EGD);

int TOTALMARKS = maths+PPS+ETC+FAI+EGD;
printf("\n TOTAL MARKS OF STUDENT ARE:%d", TOTALMARKS);

float PERCENTAGE = TOTALMARKS*0.2;
printf("\n Percentage of student is:%f", PERCENTAGE);

if (PERCENTAGE >= 90)
printf("\n GRADE OF STUDENT:A");

else if (PERCENTAGE >= 75)
printf("\n GRADE OF STUDENT:B");

else if (PERCENTAGE >= 60)
printf("\n GRADE OF STUDENT:C");

else if (PERCENTAGE >= 40)
printf("\n GRADE OF STUDENT:D");

else if (PERCENTAGE <= 30)
printf("\n STUDENT FAILED"); 


}
