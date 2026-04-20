#include<stdio.h>
#include<stdlib.h>
void writeFile()
{
char filename[50],text[500];
printf("Enter file name: ");
scanf(" %[^\n]", filename);
FILE *fp = fopen(filename,"w");
if(fp==NULL)
{
printf("ERROR: unable to create file. \n");
return;
}
printf("Enter text to write: ");
getchar();
fgets(text,500,stdin);
fprintf(fp,"%s", text);
fclose(fp);
printf("File'%s'created and written successfully \n",filename);
}
void readFile()
{
char filename[50],ch;
printf("Enter file name: ");
scanf(" %[^\n]", filename);
FILE *fp = fopen(filename,"r");
if(fp==NULL)
{
printf("ERROR: file doesnt exist or cant be opened");
return;
}
printf("\n contents of '%s': ",filename);
while((ch = fgetc(fp))!=EOF)
{
putchar(ch);
}
fclose(fp);
}
void appendFile()
{
char filename[50],text[500];
printf("Enter file name: ");
scanf(" %[^\n]", filename);
FILE *fp = fopen(filename,"a");
if(fp==NULL)
{
printf("ERROR: unable to open file ");
return;
}
printf("Enter text to append: ");
getchar();
fgets(text,500,stdin);
fprintf(fp,"%s", text);
fclose(fp);
printf("Text appended to '%s'successfully \n",filename);
}
void deleteContents()
{
char filename[50];
printf("Enter file name: ");
scanf(" %[^\n]", filename);
FILE *fp = fopen(filename,"r");
if(fp==NULL)
{
printf("ERROR: file cant be opened");
return;
}
printf("\n contents of '%s': \n",filename);
}
int main()
{
 int choice;
 while(1)
 {
   printf("\n Simple Text Editor \n");
   printf("1- create and write to file \n");
   printf("2- read and display file contents\n");
   printf("3- append text to file \n");
   printf("4- delete file contents \n");
   printf("5- Exit\n");
   printf("Enter your choice: \n");
   scanf("%d", &choice);
   switch (choice)
   {
   case 1: writeFile();break;
   case 2: readFile(); break;
   case 3: appendFile(); break;
   case 4: deleteContents(); break;
   case 5: printf("Exiting the program, bye \n");
   return 0;
   default:
   printf("Invalid choice try again \n");
   }
   }
   return 0;
}

