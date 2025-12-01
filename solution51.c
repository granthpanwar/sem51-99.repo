//Write a program to print the following pattern:
//    5
//   45
//  345
// 2345
//12345

#include <stdio.h>

int main()
{
    int n, i, j, k;

    // Input from user
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) 
    {
       
        for (k = 1; k < i; k++) {
            printf(" ");
        }

        // Print numbers in increasing order
        for (j = i; j <= n; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
 
