#include<stdio.h>
int fact(int n){
if(n == 0)
return 1;
return n * fact(n-1);
}
int main(){
int n, i, f = 1, ch;
printf("Enter Number: ");
scanf("%d", &n);
printf("\n1. Iterative Method");
    printf("\n2. Recursive Method");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            // Iterative method
            for(i = 1; i <= n; i++)
            {
                f = f * i;
            }
            printf("Factorial (Iterative) = %d\n", f);
            break;

        case 2:
            // Recursive method
            printf("Factorial (Recursive) = %d\n", fact(n));
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
