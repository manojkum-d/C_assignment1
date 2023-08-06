/*9. Write a C program to find the 'Perfect' numbers within a 10 to 100*/

#include <stdio.h>

// Function to check if a number is a perfect number
int isPerfect(int num) {
    int sum = 0;
    for (int divisor = 1; divisor < num; divisor++) {
        if (num % divisor == 0) {
            sum += divisor;
        }
    }
    return sum == num;
}

int main() {
    printf("Perfect numbers between 10 and 100 are:\n");
    for (int number = 10; number <= 100; number++) {
        if (isPerfect(number)) {
            printf("%d\n", number);
        }
    }

    return 0;
}

/*
        output:
        Perfect numbers between 10 and 100 are:
        28
*/