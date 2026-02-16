#include<stdio.h>
int main()
{
int a;
int b;
int c;
printf("\n Enter value of a,b and c: ");
scanf("%d %d %d", &a, &b, &c);
if (a>=b && a>=c)
printf("a is greater than b and c: %d",a);
else if (b>=a && b>=c)
printf("b is greater than a and c: %d",b);
else if (c>=a && c>=b)
printf("c is greater than a and b: %d",c);

}
