#include<stdio.h>
#include<stdlib.h>
int main()
{
int*arr=NULL;
int size = 0, newsize, choice,i;
while(1)
{
printf("\n Dynamic Array Operations \n");
printf("\n 1-Create new dynamic array(malloc)\n");
printf("\n 2- Add elements to array \n");
printf("\n 3- Resize the array(realloc)\n");
printf("\n 4-Display the array \n");
printf("\n 5- Free memory and EXIT \n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
if(arr!= NULL)
{
printf("Array already exists.Free the array first before creating new one \n");
break;
}
printf("Enter the no.of elements to allocate: ");
scanf("%d", &size);
if(size <= 0)
{
printf("Invalid size. \n");
break;
}
arr=(int*)malloc(size* sizeof(int));
if (arr == NULL)
{
printf("memory allocation failed\n");
}
else
{
printf("memory allocated successfully \n");
}
break;
case 2:
if(arr == NULL)
{
printf("Array not created yet \n");
break;
}
printf("Enter %d elements: \n", size);
for(i=0;i<size;i++)
{
scanf("%d", &arr[i]);
}
printf("Elements added successfully \n");
break;
case 3:
if(arr == NULL)
{
printf("Array not created yet \n");
break;
}
printf("Enter new size: ");
scanf("%d", &newsize);
if(newsize <= 0)
{
printf("Invalid size \n");
break;
}
int*temp=(int*)realloc(arr,newsize*sizeof(int));
if (temp == NULL)
{
printf("Reallocation failed \n");
break;
}
else
{
arr=temp;
if(newsize>size)
{
printf("Enter %d new elements: \n", newsize-size);
for(i=size;i<newsize;i++)
{
scanf("%d", &arr[i]);
}
}
size=newsize;
printf("Array resized successfully \n");
}
break;
case 4:
if(arr == NULL)
{
printf("Array not created yet \n");
break;
}
printf("Array elements are: \n");
for(i=0;i<size;i++)
{
printf("a[%d] = %d  ",i,arr[i]);
}
printf("\n");
break;
case 5:
if(arr!= NULL)
{
free(arr);
//arr=NULL;
printf("Memory freed successfully \n");
}
printf("Exiting program \n");
//return 0;
break;
default:
printf("Invalid choice. try again \n");
}
}
return 0;
}


































