/*8. Write a C program to print all the Armstrong numbers between two intervals.*/

#include <stdio.h>

// Function to calculate the number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num;
    int numDigits = countDigits(num);
    int sum = 0;

    while (num != 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    return originalNum == sum;
}

int main() {
    int startInterval, endInterval;

    printf("Enter the start and end numbers: ");
    scanf("%d %d", &startInterval, &endInterval);

    printf("Armstrong numbers between %d and %d are:\n", startInterval, endInterval);
    for (int num = startInterval; num <= endInterval; num++) {
        if (isArmstrong(num)) {
            printf("%d\n", num);
        }
    }

    return 0;
}

/*
    Output:

Enter the start and end numbers: 100 1000
Armstrong numbers between 100 and 1000 are:
153
370
371
407
*/

/*
        Output:

*/