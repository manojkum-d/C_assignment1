/*1.	Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 
0 when m is 0 and -1 when m is less than 0.*/

#include<stdio.h>
#include<conio.h>

void main() {
        int number_m, number_n;
        // clrscr();
        printf("Enter the value of m: ");
        scanf("%d", & number_m);
        if (number_m > 0) {
                number_n = 1;
        } else if (number_m == 0) {
                number_n = 0;
        } else {
                number_n = -1;
        }
        printf("The value of n is: %d\n", number_n);
        getch();
}

/*output:
                Enter the value of m: 1
                The value of n is: 1
                
                Enter the value of m: 0
                The value of n is: 0
                
                Enter the value of m: -1
                The value of n is: -1     
                
                */