/*10 Write a C program to convert given ASCII Charcter into  number .*/
#include <stdio.h>

int main() {
    char Char;

    printf("Enter an character: ");
    scanf("%c", &Char);
    int ascii = Char; // ASCII value is automatically converted to integer
    printf("The ASCII value of '%c' is %d\n", Char, ascii);

    return 0;
}

/*
            output:
Enter an character: A
The ASCII value of 'A' is 65       
*/