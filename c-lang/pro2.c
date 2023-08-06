/*2.	Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.*/

#include<stdio.h>
#include<conio.h>
 void main()
 {
    int age;
    printf("Enter Your Age: ");
    scanf("%d",&age);
    if(age>=18)
        {
            printf("You are eligible to vote!!!");
        }
        else{
            printf("You are not eligible to vote because you are not an adult !!!");
        }
        getch();
 }

 /*     Output:
                    Enter Your Age: 18
                    You are eligible to vote!!!

                    Enter Your Age: 12
                    You are not eligible to vote because you are not an adult !!!


 */