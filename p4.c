#include<stdio.h>
#include<string.h>

void sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array:\n");
    for(i=0;i<n;i++)
        printf("%d ", a[i]);
}

void search(int a[], int n,int key)
{
    int i;
    for(i=0;i<n; i++)
    {
        if(a[i] == key)
        {
            printf("Element found at position %d",i+1);
            return;
        }
    }
    printf("Element not found");
}

void concat(char s1[], char s2[])
{
    strcat(s1,s2);
    printf("Result: %s ",s1);
}

void compare(char s1[], char s2[])
{
    if (strcmp(s1,s2)==0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
}

int main()
{
    int choice;
    printf("1. Array\n2. String\nEnter choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        int n,a[50],ch,key,i;

        printf("Enter size: ");
        scanf("%d", &n);

        printf("Enter Elements: ");
        for(i=0;i<n;i++)
            scanf("%d", &a[i]);

        printf("1. Sort\n2. Search\nEnter choice: ");
        scanf(" %d", &ch);

        if(ch == 1)
            sort(a,n);
        else if(ch == 2)
        {
            printf("Enter element to search: ");
            scanf("%d", &key);
            search(a,n,key);
        }
        else
            printf("Invalid choice");
    }
    else if (choice == 2)
    {
        char s1[50],s2[100];
        int ch;

        printf("Enter First string: ");
        scanf("%s", s1);

        printf("Enter second string: ");
        scanf("%s", s2);

        printf("1. Concatenate\n2. Compare\nEnter choice: ");
        scanf("%d", &ch);

        if(ch == 1)
            concat(s1,s2);
        else if (ch == 2)
            compare(s1,s2);
        else
            printf("Invalid choice");
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}
