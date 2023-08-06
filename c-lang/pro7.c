/*7. C program to calculate the salary Slip of a given number of employees.(DA, Basic Pay, HRA, TA, LOP) */


#include <stdio.h>

// Function to calculate salary slip
void calculateSalarySlip(float basic, float daRate, float hraRate, float taRate, float lopDays) {
    float da, hra, ta, grossSalary, deductions, netSalary;

    // Calculate allowances
    da = (daRate / 100) * basic;
    hra = (hraRate / 100) * basic;
    ta = (taRate / 100) * basic;

    // Calculate gross salary
    grossSalary = basic + da + hra + ta;

    // Calculate deductions
    deductions = (lopDays / 30) * basic;

    // Calculate net salary
    netSalary = grossSalary - deductions;

    // Print salary slip
    printf("\nSalary Slip:\n");
    printf("Basic Salary: %.2f\n", basic);
    printf("Dearness Allowance (DA): %.2f\n", da);
    printf("House Rent Allowance (HRA): %.2f\n", hra);
    printf("Travel Allowance (TA): %.2f\n", ta);
    printf("Loss of Pay (LOP): %.2f\n", deductions);
    printf("Gross Salary: %.2f\n", grossSalary);
    printf("Net Salary: %.2f\n", netSalary);
}

int main() {
    int numEmployees;
    float empBasic, empDaRate, empHraRate, empTaRate, empLopDays;
    int i = 1;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    while (i <= numEmployees) {
        printf("\nEnter details for Employee %d:\n", i);
        printf("Basic Salary: ");
        scanf("%f", &empBasic);
        printf("Dearness Allowance (DA) Rate: ");
        scanf("%f", &empDaRate);
        printf("House Rent Allowance (HRA) Rate: ");
        scanf("%f", &empHraRate);
        printf("Travel Allowance (TA) Rate: ");
        scanf("%f", &empTaRate);
        printf("Loss of Pay (LOP) Days: ");
        scanf("%f", &empLopDays);

        calculateSalarySlip(empBasic, empDaRate, empHraRate, empTaRate, empLopDays);
        
        i++;
    }

    return 0;
}


/*
        Output:

Enter the number of employees: 2

Enter details for Employee 1:
Basic Salary: 8000
Dearness Allowance (DA) Rate: 10
House Rent Allowance (HRA) Rate: 20
Travel Allowance (TA) Rate: 10
Loss of Pay (LOP) Days: 30

Salary Slip:
Basic Salary: 8000.00
Dearness Allowance (DA): 800.00
House Rent Allowance (HRA): 1600.00
Travel Allowance (TA): 800.00
Loss of Pay (LOP): 8000.00
Gross Salary: 11200.00
Net Salary: 3200.00

Enter details for Employee 2:
Basic Salary: 10000
Dearness Allowance (DA) Rate: 10
House Rent Allowance (HRA) Rate: 30
Travel Allowance (TA) Rate: 20
Loss of Pay (LOP) Days: 20

Salary Slip:
Basic Salary: 10000.00
Dearness Allowance (DA): 1000.00
House Rent Allowance (HRA): 3000.00
Travel Allowance (TA): 2000.00
Loss of Pay (LOP): 6666.67
Gross Salary: 16000.00
Net Salary: 9333.33
*/