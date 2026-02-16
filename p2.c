/** ARITHMATIC OPERATION WITH SCANF*/

# include <stdio.h>
int main()
{
printf("\n arithmatic operations:");
int a;
int b;
printf("\nEnter value of a and b:");
scanf("%d %d", &a,&b);
printf("\nSum is: %d", a+b);
printf("\nsubtraction is: %d", a-b);
printf("\nproduct is: %d", a*b);
printf("\nDivision is: %d", a/b);
printf("\nReminder is: %d", a%b);

return 0;
}
