/*6. C program to calculate the tax of n given number of employees.
 Use a separate function to calculate the tax. Tax is 20% of basic if basic is less than 9000 otherwise tax is 25% of basic. 
 Add Deductions of Savings around 2,00,000 
*/

#include <stdio.h>

// Function to calculate tax with savings deduction
float calculateTax(float basic, float savings) {
    float taxRate = (basic < 9000) ? 0.20 : 0.25;
    float taxableIncome = basic - savings;
    float tax = taxableIncome * taxRate;
    return tax;
}

int main() {
    int numEmployees;
    float basicSalary, savings, tax, totalTax = 0.0;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    for (int i = 1; i <= numEmployees; i++) {
        printf("Enter the basic salary for Employee %d: ", i);
        scanf("%f", &basicSalary);

        printf("Enter the savings for Employee %d: ", i);
        scanf("%f", &savings);

        tax = calculateTax(basicSalary, savings);
        totalTax += tax;

        printf("Tax for Employee %d: %.2f\n", i, tax);
    }

    printf("Total Tax for all employees: %.2f\n", totalTax);

    return 0;
}


/*output:

Enter the number of employees: 3
Enter the basic salary for Employee 1: 8000
Enter the savings for Employee 1: 1000
Enter the basic salary for Employee 2: 10000
Enter the savings for Employee 2: 2000
Enter the basic salary for Employee 3: 12000
Enter the savings for Employee 3: 3000

Tax for Employee 1: 1400.00
Tax for Employee 2: 2000.00
Tax for Employee 3: 2250.00
Total Tax for all employees: 5650.00
*/