#include<stdio.h>
int main()
{
char str[100];
int choice,i;
int length = 0;
do
{
printf("\n Main Menu");
printf("\n 1. Reverse Number ");
printf("\n 2. Upper to Lower");
printf("\n 3. Lower to Upper");
printf("\n 4. Length of string");
printf("\n 5. Exit");
printf("\n Enter your choice[1-5]");
scanf("%d", &choice);
if (choice>=1 && choice<=4)
{
printf("\n Enter string: ");
scanf("%s", str);
while(str[length]!='\0')
{
length++;
}
}
switch(choice)
{
case 1:
printf("\n original string: %s",str);
printf("\n reverse: ");
for(int i = length-1; i>=0; i--)
{
printf("%c",str[i]);
}
printf("\n");
break;
case 2:
printf("\noriginal string: %s\n", str);
printf("Lowercase: ");
for(int i=0; i<length; i++)
{
  if (str[i] >='A' && str[i]<='Z')
    {
printf("%c", str[i] + 32);
}
else
{
printf("%c",str[i]);
}
}
printf("\n");
break;
case 3:
printf("\n original string: %s",str);
printf("\n Uppercase: \t");
for(int i=0; i<length; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
printf("%c", str[i]-32);
}
else
{
printf("%c",str[i]);
}
}
printf("\n");
break;
case 4:
printf("\n original string: %s",str);
printf("\n length of string:%d", length);
break;
case 5:
printf("Exit program");
break;
default:
printf("\n please enter valid case[1-5]");
}
}while (choice!=5);
return 0;
}

