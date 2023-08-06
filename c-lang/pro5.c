/*5.	Write a program in C to make a pyramid pattern with numbers increased by multiples of  five */

#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    int count = 1;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf("   ");
        }

        for (int k = 1; k <= i; k++) {
            printf("%-4d", count * 5);
            count++;
        }

        printf("\n");
    }

    return 0;
}

/*
            output:
                   Enter the number of rows: 3
      5
   10  15
20  25  30 
*/