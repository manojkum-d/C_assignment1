/*12 Write a C Program to use only For loop to solve addition of n even numbers*/
#include <stdio.h>

int main() {
    int numTerms, totalSum = 0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &numTerms);

    for (int i = 1; i <= numTerms; i++) {
        int evenNum = 2 * i;
        totalSum += evenNum;
    }

    printf("Sum of first %d even numbers is: %d\n", numTerms, totalSum);

    return 0;
}
/*
    Output:Enter the number of terms (n): 10
Sum of first 10 even numbers is: 110
*/