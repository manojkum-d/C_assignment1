/*4.	Write a program in C  to create simple Calculator using Menu Driven (Switch Case)*/

#include <stdio.h>

int main() {
    int option;
    float operand1, operand2, result;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    while (1) {
        printf("\nEnter your choice (1-5): ");
        scanf("%d", &option);

        if (option == 5) {
            printf("Exit\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &operand1, &operand2);

        switch (option) {
            case 1:
                result = operand1 + operand2;
                printf("Addition: %.2f + %.2f = %.2f\n", operand1, operand2, result);
                break;
            case 2:
                result = operand1 - operand2;
                printf("Subtraction: %.2f - %.2f = %.2f\n", operand1, operand2, result);
                break;
            case 3:
                result = operand1 * operand2;
                printf("Multiplication: %.2f * %.2f = %.2f\n", operand1, operand2, result);
                break;
            case 4:
                if (operand2 != 0) {
                    result = operand1 / operand2;
                    printf("Division: %.2f / %.2f = %.2f\n", operand1, operand2, result);
                } else {
                    printf("Error: Cannot divide by zero.\n");
                }
                break;
            default:
                printf("Invalid choice! Please select from 1 to 5.\n");
        }
    }

    return 0;
}


/*      output:

                Simple Calculator
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit

Enter your choice (1-5): 1
Enter two numbers: 10 20
Addition: 10.00 + 20.00 = 30.00

Enter your choice (1-5): 2
Enter two numbers: 30 40
Subtraction: 30.00 - 40.00 = -10.00

Enter your choice (1-5): 3
Enter two numbers: 5 10
Multiplication: 5.00 * 10.00 = 50.00

Enter your choice (1-5): 4
Enter two numbers: 10 5
Division: 10.00 / 5.00 = 2.00

Enter your choice (1-5): 5
Exit

*/